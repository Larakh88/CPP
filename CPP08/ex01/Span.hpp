/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:32 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/09 11:20:59 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <fstream>

class	Span {
private:
	unsigned int		_N;
	std::vector<int>	_vec;

	Span();

public:	
	Span(unsigned int n);
	Span(const Span &copy);
	~Span(void);
	
	Span	&operator=(const Span &copy);
	int		&operator[](int pos);
	
	void	addNumber(int nbr);
	
	void	addMulNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	
	int		shortestSpan();
	
	int		longestSpan();
	
	class	Error : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#endif
