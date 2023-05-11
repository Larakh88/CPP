/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/11 11:13:29 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(2) {}

Span::Span(unsigned int n) 
{
	int i = n;
	if (i <= 0)
		throw(Error());
	this->_N = n;
}

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

int		&Span::operator[](int pos)
{
	if (pos < 0 || pos > static_cast<int>(this->_vec.size()))
		throw(Error());
	return (this->_vec[pos]);
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

void	Span::addMulNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if ((end - begin) > static_cast<int>((this->_N - this->_vec.size())))
		throw(Error());
	while (begin < end)
	{
		addNumber(*begin);
		begin++;
	}
}
	
int		Span::longestSpan()
{
	if (this->_vec.size() <= 1)
		throw(Error());
	std::vector<int> temp(this->_vec);
	std::sort (temp.begin(), temp.end());
	return (abs(temp[0] - temp[this->_vec.size() - 1]));
}

int		Span::shortestSpan()
{
	int small = INT_MAX;
	int j = this->_vec.size() - 1;
	
	if (this->_vec.size() <= 1)
		throw(Error());
	std::vector<int> temp(this->_vec);
	std::sort (temp.begin(), temp.end());
	for (int i = 0; i < j; i++)
		if (abs(temp[i + 1] - temp[i]) < small)
			small = abs(temp[i + 1] - temp[i]);
	return (small);
}

const char	*Span::Error::what() const throw ()
{
	return ("Out of Range.\n");
}
