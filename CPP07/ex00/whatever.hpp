/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:54:59 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/05 16:28:29 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
T	max(T const & x, T const & y)
{
	if (x > y)
		return (x);
	return (y);
} 

template< typename T >
T	min(T const & x, T const & y)
{
	if (x < y)
		return (x);
	return (y);
} 

template< typename T >
void	swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
} 

#endif