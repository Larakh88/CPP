/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:32:49 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/26 08:35:51 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &) {}
PmergeMe	&PmergeMe::operator=(const PmergeMe &) { return(*this); }
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(int argc, char **argv)
{
	std::vector<int>	temp;

	vecError(argc, argv); //check for errors - if no errors, create aVec and bVec
	if ((int)_bVec.size() % 2 != 0) // if total number is odd, save the last one in straggler
	{
		this->_straggler = *(_bVec.end() - 1);
		_aVec.erase(_aVec.end() - 1);
		_bVec.erase(_bVec.end() - 1);
	}
	printVec(_aVec, "Before:     ");
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
	printVec(_aVec, "After Pairs:  ");
	insertionSortRecursive((int)_aVec.size()); // sort pairs in ascending order based on the largest elements
	printVec(_aVec, "After Sort:   ");
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
	printVec(_aVec, "After:  ");
	printVec(temp, "Temp:   ");
	insertPend(temp);
}

void	PmergeMe::vecError(int argc, char **argv)
{
	unsigned long nb;
	std::string	input;
	std::vector<int>::iterator	it;

	if (argc < 2)
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
	std::vector<int>	insertIndex;
	
	jacobNbs(temp.size()); // create jacobsthal number sequence based on nb of elements in pend/temp
	_aVec.insert(_aVec.begin(), temp[0]); // inserting b1 into main but do not remove from temp
	//temp.erase(temp.begin());
	insertIndex.push_back(0);
	// printVec(_aVec, "After adding 0:   ");
	// printVec(temp, "After removing 0:  ");
	for (int i = 1, ja = 1; i <= (int)temp.size(); ja++)
	{
		int	size = _jacob[ja] - _jacob[ja - 1];
		std::cout << "size: " << size << std::endl;
		for (int j = size; j >= i; j--)
		{
			//int max = 
			if (j + i > (int)temp.size())
			{
				std::cout << "hi\n";
				continue;
			}
			int place = binarySearch(_aVec.size() , 0, temp[j]);
			std::cout << "place: " << place << std::endl;
			_aVec.insert(_aVec.begin() + place, temp[j]);
			std::cout << j;
			printVec(_aVec, ":  ");
		} 
		i = i + size;
	}
	printVec(_aVec, "Final Sorted:   ");

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
	printVec(_jacob, "Jacob:   ");
}

const char	*PmergeMe::Error::what() const throw()
{
	std::cout << "Error\n";
	return (0);
}