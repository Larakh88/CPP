/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:24:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/14 19:56:10 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
private:
	int					_nb;
	static int const	_frac = 8;

public:
	Fixed (void);
	~Fixed (void);
	Fixed (Fixed const & copy);
	Fixed&	operator=(Fixed const & rhs);
	void	setRawBits (int const raw);
	int		getRawBits (void) const;

};

#endif