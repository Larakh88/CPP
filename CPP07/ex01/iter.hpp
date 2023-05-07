/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:35:48 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/05 16:28:27 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T>
void	iter(T const *array, int len, void (*f)(T const &, int))
{
	for (int i = 0; i < len; i++)
		f(array[i], i);
}

template< typename T>
void	f(T const &var, int i)
{
	std::cout << "Item " << i << " in this array is " << var << std::endl;
}

#endif