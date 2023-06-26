/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:32:47 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/26 17:46:24 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <limits.h>
#include <cstdlib>
#include <sys/time.h>
#define RESET "\033[30m"
#define BLUE "\033[34m"

class PmergeMe {
private:
	PmergeMe();
	PmergeMe(const PmergeMe &);
	PmergeMe	&operator=(const PmergeMe &);
	
	/* Using Vectors */
	void	executeVec(int argc, char **argv);
	void	vecError(int argc, char **argv);
	void	printVec(std::vector<int> vec, std::string msg);
	void	insertionSortRecursive(int n);
	void	jacobNbs(int n);
	int		binarySearch(int max, int min, int nb);
	void	insertPend(std::vector<int> temp);
	void	createIndex();
	int		findMax(int nb);
	void	finalPrint();
	
	std::vector<int>	_aVec;
	std::vector<int>	_bVec;
	int					_straggler;
	bool				_straFlag;
	std::vector<int>	_jacob;
	std::vector<int>	_index;
	double 				_vecDelta;
	
	/* Using deque*/
	void	executeDe(int argc, char **argv);
	void	deError(int argc, char **argv);
	void	printDe(std::deque<int> vec, std::string msg);
	void	insertionSortRecursiveDe(int n);
	void	jacobNbsDe(int n);
	int		binarySearchDe(int max, int min, int nb);
	void	insertPendDe(std::deque<int> temp);
	void	createIndexDe();
	int		findMaxDe(int nb);
	
	std::deque<int>	_aDe;
	std::deque<int>	_bDe;
	int				_stragglerDe;
	bool			_straFlagDe;
	std::deque<int>	_jacobDe;
	std::deque<int>	_indexDe;
	double 			_deDelta;

public:
	~PmergeMe();
	PmergeMe(int argc, char **argv);
	
	class Error : public std::exception {
	public:
		virtual const char *what() const throw();	
	};
	
};

#endif
