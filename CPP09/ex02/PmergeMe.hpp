/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:32:47 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/25 19:50:15 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <limits.h>
#include <cstdlib>

class PmergeMe {
private:
	PmergeMe();
	PmergeMe(const PmergeMe &);
	PmergeMe	&operator=(const PmergeMe &);
	
	void	vecError(int argc, char **argv);
	void	printVec(std::vector<int> vec, std::string msg);
	void	insertionSortRecursive(int n);
	void	jacobNbs(int n);
	int		binarySearch(int max, int min, int nb);
	
	std::vector<int>	_aVec;
	std::vector<int>	_bVec;
	int					_straggler;
	std::vector<int>	_jacob;

public:
	~PmergeMe();
	PmergeMe(int argc, char **argv);
	
	class Error : public std::exception {
	public:
		virtual const char *what() const throw();	
	};
	
};

#endif