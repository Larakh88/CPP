/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:05 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/18 10:12:08 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors */

Fixed::Fixed (void) : _nb(0)
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed (const int nbr)
{
	//std::cout << "Int constructor called\n";
	this->_nb = nbr << this->_frac;
}

Fixed::Fixed (const float nbr)
{
	int	decimal = 1;
	
	//std::cout << "Float constructor called\n";
	for (int i = 0; i < this->_frac; i++)
		decimal = decimal * 2;
	this->_nb = roundf(nbr * decimal);	
}

/* Copy constructor */

Fixed::Fixed (const Fixed &copy)
{
	//std::cout << "Copy constructor called\n";
	*this = copy;
	return;
}

/* Destructor */

Fixed::~Fixed (void)
{
	//std::cout << "Destructor called\n";
}

/* Member Functions */

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

Fixed	&Fixed::min (Fixed &nb1, Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

const Fixed	&Fixed::min (const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::max (Fixed &nb1, Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}

const Fixed	&Fixed::max (const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}

/* Stream redirection operator */

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

/* Operators */

/* Comparison */
Fixed	&Fixed::operator=(const Fixed &rhs)
{
	//std::cout << "Copy assignment operator called\n";
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	if (this->_nb < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	if (this->_nb > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	if (this->_nb <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	if (this->_nb >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	if (this->_nb == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	if (this->_nb != rhs.getRawBits())
		return true;
	return false;
}

/* Arithmetic */
Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/* increment / decrement */
Fixed	&Fixed::operator++()
{
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp;

	temp = *this;
	this->_nb++;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	this->_nb--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp;

	temp = *this;
	this->_nb--;
	return (temp);
}
