/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:05 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/14 19:55:03 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _nb(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed (Fixed const & copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
	return;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

void	Fixed::setRawBits (int const raw)
{
	this->_nb = raw;
}

int		Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_nb);
}