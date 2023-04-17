/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:05 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/17 14:53:01 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _nb(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed ( int const nbr)
{
	std::cout << "Int constructor called\n";
	this->_nb = nbr << _frac;
}

Fixed::Fixed (float const nbr)
{
	int	decimal = 1;
	
	std::cout << "Float constructor called\n";
	for (int i = 0; i < this->_frac; i++)
		decimal = decimal * 2;
	this->_nb = roundf(nbr * decimal);	
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
	return (this->_nb);
}

float	Fixed::toFloat (void) const
{
	int	decimal = 1;
	float	f;
	
	for (int i = 0; i < this->_frac; i++)
		decimal = decimal * 2;
	f = (float)(this->_nb) / decimal;
	return (f);
}

int		Fixed::toInt (void) const
{
	int	nbr;
	
	nbr = this->_nb >> _frac;
	return (nbr);
}

std::ostream&	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
