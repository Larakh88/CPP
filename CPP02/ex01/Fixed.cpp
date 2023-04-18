/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:05 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/17 19:38:02 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _nb(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed (const int nbr)
{
	std::cout << "Int constructor called\n";
	this->_nb = nbr << this->_frac;
}

Fixed::Fixed (const float nbr)
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

Fixed::Fixed (const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
	return;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

void	Fixed::setRawBits (const int raw)
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
	
	nbr = this->_nb >> this->_frac;
	return (nbr);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}
