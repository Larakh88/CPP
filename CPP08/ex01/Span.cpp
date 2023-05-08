/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/08 20:09:46 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _N(n) {}

Span::Span(const Span &copy)
{
	*this = copy;
}
	
Span::~Span(void) { }
	
Span	&Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->_N = copy._N;
		this->_vec = copy._vec;
	}
	return (*this);
}
	
void	Span::addNumber(int nbr)
{
	if (this->_vec.size() >= this->_N)
		throw(Error());
	else
	{
		this->_vec.push_back(nbr);
	}
}
	
int		Span::longestSpan()
{
	std::vector<int>::iterator it = this->_vec.begin();
	
	if (this->_vec.size() <= 1)
		throw(Error());
	std::sort (this->_vec.begin(), this->_vec.end());
	return (abs(*it - *(it + this->_vec.size() - 1)));
}

int		Span::shortestSpan()
{
	int small = INT_MAX;
	std::vector<int>::iterator it;
	
	if (this->_vec.size() <= 1)
		throw(Error());
	std::sort (this->_vec.begin(), this->_vec.end());
	for (it = this->_vec.begin(); it != this->_vec.end(); ++it)
		if (abs(*it - *(it + 1)) < small)
			small = abs(*it - *(it + 1));
	return (small);
}

const char	*Span::Error::what() const throw ()
{
	return ("Vector already Full.\n");
}
