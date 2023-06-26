/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:33:51 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/26 19:38:16 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	PmergeMe::executeDe(int argc, char **argv)
{
	std::deque<int>	temp;

	this->_straFlagDe = false;
	struct timeval start1, end1;
	gettimeofday(&start1, NULL);
	long s = start1.tv_sec * 1000 + start1.tv_usec / 1000;
	deError(argc, argv); //check for errors - if no errors, create aVec and bVec
	if ((int)_bDe.size() % 2 != 0) // if total number is odd, save the last one in straggler
	{
		this->_stragglerDe = *(_bDe.end() - 1);
		this->_straFlagDe = true;
		_aDe.erase(_aDe.end() - 1);
	}
	for (int i = 0; i < (int)_aDe.size() - 1; i++) // determine largest of 2 elements and make it first
	{
		if (i % 2 == 0 )
		{
			if (_aDe[i] < _aDe[i + 1])
			{
				int temp = _aDe[i];
				_aDe[i] = _aDe[i + 1];
				_aDe[i + 1] = temp;
			}
		}
	}
	insertionSortRecursiveDe((int)_aDe.size()); // sort pairs in ascending order based on the largest elements
	int j = 0;
	for (int i = 0; i < (int)_aDe.size(); i++) // split in 2 deques, main/aVec and pend/temp
	{
		if ((i % 2 != 0 && j % 2 == 0) || (i % 2 == 0 && j % 2 != 0))
		{
			temp.push_back(_aDe[i]);
			_aDe.erase(_aDe.begin() + i);
			j++;
		}
	}
	insertPendDe(temp);
	gettimeofday(&end1, NULL);
	long e = end1.tv_sec * 1000 + end1.tv_usec / 1000;
	_deDelta = double(e - s);
}

void	PmergeMe::deError(int argc, char **argv)
{
	unsigned long nb;
	std::string	input;
	std::deque<int>::iterator	it;

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
		this->_bDe.push_back(nb);
		this->_aDe.push_back(nb);
	}
}

void	PmergeMe::insertionSortRecursiveDe(int n)
{
	if (n <= 2)
		return ;
		
	insertionSortRecursiveDe(n - 2);
	
	int last = _aDe[n - 2];
	int second = _aDe[n - 1];
	int j = n - 4;

	while (j >= 0 && _aDe[j] > last)
	{
		_aDe[j + 2] = _aDe [j];
		_aDe[j + 3] = _aDe [j + 1];
		j = j - 2;
	}
	_aDe[j + 2] = last;
	_aDe[j + 3] = second;
}
void	PmergeMe::insertPendDe(std::deque<int> temp)
{
	createIndexDe();
	jacobNbsDe(temp.size()); // create jacobsthal number sequence based on nb of elements in pend/temp
	_aDe.insert(_aDe.begin(), temp[0]); // inserting b1 into main but do not remove from temp
	for (int i = 0, ja = 1; i < (int)temp.size() - 1; ja++)
	{
		int	size = _jacobDe[ja] - _jacobDe[ja - 1];
		for (int j = size; j > 0; j--)
		{
			if (j + i >= (int)temp.size())
				continue;
			int max = findMaxDe(j + i);
			int place = binarySearchDe(max, 0, temp[j + i]);
			_aDe.insert(_aDe.begin() + place, temp[j + i]);
		} 
		i = i + size;
	}
	if (this->_straFlagDe == true)
	{
		int strag = binarySearchDe(_aDe.size(), 0, this->_stragglerDe);
		_aDe.insert(_aDe.begin() + strag, this->_stragglerDe);
	}

}

// max and min are the iterators to search in between in the deque; 
// value returned is the index before which the element needs to be inserted 
// for {0, 11, 13, 17} - 12 needs to be inserted at index 2
// if return == size of deque, just push_back 
int		PmergeMe::binarySearchDe(int max, int min, int nb)
{
	while (min < max)
	{
		int mid = (max + min) / 2;
		if (nb < this->_aDe[mid])
			max = mid;
		else if (nb == this->_aDe[mid])
			return (mid);
		else
			min = mid + 1;
	}
	return (min);
}

void	PmergeMe::printDe(std::deque<int> deq, std::string msg)
{
	std::deque<int>::iterator	it;

	std::cout << msg;
	for (it = deq.begin(); it < deq.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::jacobNbsDe(int n)
{
	_jacobDe.push_back(1);
	_jacobDe.push_back(3);
	
	for (int j = 1; n >= _jacobDe[j]; j++)
	{
		int nb = _jacobDe[j] + 2 * (_jacobDe[j - 1]);
		_jacobDe.push_back(nb);
	}
}

void	PmergeMe::createIndexDe()
{
	for (int i = 0; i < (int)_aDe.size(); i++)
		_indexDe.push_back(_aDe[i]);
}

int		PmergeMe::findMaxDe(int nb)
{
	if (nb > (int)_indexDe.size())
		return ((int)_indexDe.size());
	int avecNb = _indexDe[nb];
	for (int i = 0; i < (int)_aDe.size(); i++)
	{
		if (_aDe[i] == avecNb)
		{
			return (i);
		}
	}
	return ((int)_indexDe.size());
}
