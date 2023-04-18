/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/18 08:16:21 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {
private:
	int					_nb;
	static int const	_frac = 8;

public:
	Fixed (void);
	Fixed (const int nbr);
	Fixed (const float nbr);
	~Fixed (void);
	
	Fixed (const Fixed &copy);
	
	Fixed	&operator=(const Fixed &rhs);
	bool	operator<(const Fixed &rhs) const;
	bool	operator>(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;

	Fixed	operator+(const Fixed &rhs) const;
	Fixed	operator-(const Fixed &rhs) const;
	Fixed	operator*(const Fixed &rhs) const;
	Fixed	operator/(const Fixed &rhs) const;

	Fixed	&operator++(); //prefix ++x return x by reference
	Fixed	operator++(int); //postfix x++ return a copy of original
	Fixed	&operator--(); //prefix ++x return x by reference
	Fixed	operator--(int); //postfix x++ return a copy of original
	
	void	setRawBits (const int raw);
	int		getRawBits (void) const;
	float	toFloat (void) const;
	int		toInt (void) const;

};

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs);

#endif
