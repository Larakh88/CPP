/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/09 11:20:54 by lel-khou         ###   ########.fr       */
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
	std::sort (this->_vec.begin(), this->_vec.end());
	return (abs(this->_vec[0] - this->_vec[this->_vec.size() - 1]));
}

int		Span::shortestSpan()
{
	int small = INT_MAX;
	int j = this->_vec.size() - 1;
	
	if (this->_vec.size() <= 1)
		throw(Error());
	std::sort (this->_vec.begin(), this->_vec.end());
	for (int i = 0; i < j; i++)
		if (abs(this->_vec[i + 1] - this->_vec[i]) < small)
			small = abs(this->_vec[i + 1] - this->_vec[i]);
	return (small);
}

const char	*Span::Error::what() const throw ()
{
	return ("Out of Range.\n");
}
