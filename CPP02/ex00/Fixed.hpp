/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/17 17:37:58 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
private:
	int					_nb;
	static const int	_frac = 8;

public:
	Fixed (void);
	~Fixed (void);
	Fixed (const Fixed &copy);
	Fixed	&operator=(const Fixed &rhs);
	void	setRawBits (const int raw);
	int		getRawBits (void) const;

};

#endif