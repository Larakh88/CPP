/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:32:49 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/27 10:09:51 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &) {}
PmergeMe	&PmergeMe::operator=(const PmergeMe &) { return(*this); }
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(int argc, char **argv)
{
	executeVec(argc, argv);
	executeDe(argc, argv);
	finalPrint();
}

void	PmergeMe::executeVec(int argc, char **argv)
{
	std::vector<int>	temp;

	this->_straFlag = false;
	struct timeval start, end;
	gettimeofday(&start, NULL);
	long s = start.tv_sec * 1000 + start.tv_usec / 1000;
	vecError(argc, argv); //check for errors - if no errors, create aVec and bVec
	if ((int)_bVec.size() % 2 != 0) // if total number is odd, save the last one in straggler
	{
		this->_straggler = *(_bVec.end() - 1);
		this->_straFlag = true;
		_aVec.erase(_aVec.end() - 1);
	}
	for (int i = 0; i < (int)_aVec.size() - 1; i++) // determine largest of 2 elements and make it first
	{
		if (i % 2 == 0 )
		{
			if (_aVec[i] < _aVec[i + 1])
			{
				int temp = _aVec[i];
				_aVec[i] = _aVec[i + 1];
				_aVec[i + 1] = temp;
			}
		}
	}
	insertionSortRecursive((int)_aVec.size()); // sort pairs in ascending order based on the largest elements
	int j = 0;
	for (int i = 0; i < (int)_aVec.size(); i++) // split in 2 vectors, main/aVec and pend/temp
	{
		if ((i % 2 != 0 && j % 2 == 0) || (i % 2 == 0 && j % 2 != 0))
		{
			temp.push_back(_aVec[i]);
			_aVec.erase(_aVec.begin() + i);
			j++;
		}
	}
	insertPend(temp);
	gettimeofday(&end, NULL);
	long e = end.tv_sec * 1000 + end.tv_usec / 1000;
	_vecDelta = double(e - s);
}

void	PmergeMe::vecError(int argc, char **argv)
{
	unsigned long nb;
	std::string	input;
	std::vector<int>::iterator	it;

	if (argc < 3)
		throw(Error());
	//checking for negative nbs, nbs bigger than int max and any other input errors
	for (int i = 1; i < argc; i++)
	{
		input = argv[i];
		if (input.find_first_not_of("0123456789") != std::string::npos)
			throw(Error());
		nb = strtoul(argv[i], 0, 10);
		if (nb > INT_MAX)
			throw(Error());
		this->_bVec.push_back(nb);
		this->_aVec.push_back(nb);
	}
}

void	PmergeMe::insertionSortRecursive(int n)
{
	if (n <= 2)
		return ;
		
	insertionSortRecursive(n - 2);
	
	int last = _aVec[n - 2];
	int second = _aVec[n - 1];
	int j = n - 4;

	while (j >= 0 && _aVec[j] > last)
	{
		_aVec[j + 2] = _aVec [j];
		_aVec[j + 3] = _aVec [j + 1];
		j = j - 2;
	}
	_aVec[j + 2] = last;
	_aVec[j + 3] = second;
}
void	PmergeMe::insertPend(std::vector<int> temp)
{
	createIndex();
	jacobNbs(temp.size()); // create jacobsthal number sequence based on nb of elements in pend/temp
	_aVec.insert(_aVec.begin(), temp[0]); // inserting b1 into main but do not remove from temp
	for (int i = 0, ja = 1; i < (int)temp.size() - 1; ja++)
	{
		int	size = _jacob[ja] - _jacob[ja - 1];
		for (int j = size; j > 0; j--)
		{
			if (j + i >= (int)temp.size())
				continue;
			int max = findMax(j + i);
			int place = binarySearch(max, 0, temp[j + i]);
			_aVec.insert(_aVec.begin() + place, temp[j + i]);
		} 
		i = i + size;
	}
	if (this->_straFlag == true)
	{
		int strag = binarySearch(_aVec.size(), 0, this->_straggler);
		_aVec.insert(_aVec.begin() + strag, this->_straggler);
	}

}

// max and min are the iterators to search in between in the vector; 
// value returned is the index before which the element needs to be inserted 
// for {0, 11, 13, 17} - 12 needs to be inserted at index 2
// if return == size of vector, just push_back 
int		PmergeMe::binarySearch(int max, int min, int nb)
{
	while (min < max)
	{
		int mid = (max + min) / 2;
		if (nb < this->_aVec[mid])
			max = mid;
		else if (nb == this->_aVec[mid])
			return (mid);
		else
			min = mid + 1;
	}
	return (min);
}

void	PmergeMe::printVec(std::vector<int> vec, std::string msg)
{
	std::vector<int>::iterator	it;

	std::cout << msg;
	for (it = vec.begin(); it < vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::jacobNbs(int n)
{
	_jacob.push_back(1);
	_jacob.push_back(3);
	
	for (int j = 1; n >= _jacob[j]; j++)
	{
		int nb = _jacob[j] + 2 * (_jacob[j - 1]);
		_jacob.push_back(nb);
	}
}

const char	*PmergeMe::Error::what() const throw()
{
	std::cout << "Error\n";
	return (0);
}

void	PmergeMe::createIndex()
{
	for (int i = 0; i < (int)_aVec.size(); i++)
		_index.push_back(_aVec[i]);
}

int		PmergeMe::findMax(int nb)
{
	if (nb > (int)_index.size())
		return ((int)_index.size());
	int avecNb = _index[nb];
	
	for (int i = 0; i < (int)_aVec.size(); i++)
		if (_aVec[i] == avecNb)
			return (i);
	return (0);
}

void	PmergeMe::finalPrint()
{
	printVec(_bVec, BLUE "Before:  " RESET);
	std::cout << std::endl;
	printVec(_aVec, BLUE "After:  " RESET);
	std::cout << BLUE "Time to process a range of " << _aVec.size() << " elements with std::vector : " << this->_vecDelta << " ms\n" ;
	
	
	std::cout << "--------------------------------------------------------------------------------------------------------------------------";
	std::cout << "--------------------------------------------------------------------------------------------------------------------------"<< std::endl ;
	
	printDe(_bDe, BLUE "Before:  " RESET);
	std::cout << std::endl;
	printDe(_aDe, BLUE "After:  " RESET);
	std::cout << BLUE "Time to process a range of " << _aDe.size() << " elements with std::deque : " << this->_deDelta << " ms\n" ;
	
	// is_sorted is CPP 17++
	if (std::is_sorted(_aVec.begin(), _aVec.end()) == true)
		std::cout << PINK "Vector - Properly Sorted!" << std::endl;
	else
		std::cout << PINK "Vector - Wrong Sort!" << std::endl;
		
	if (std::is_sorted(_aDe.begin(), _aDe.end()) == true)
		std::cout << PINK "Deque - Properly Sorted!" << RESET << std::endl;
	else
		std::cout << PINK "Deque - Wrong Sort!" << RESET << std::endl;
}
