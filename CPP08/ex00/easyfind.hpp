/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:23:49 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/08 13:45:37 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template< typename T>
void	easyfind(T x, int nb)
{
	typename T::iterator it = std::find(x.begin(), x.end(), nb);
	if (it != x.end())	
    	std::cout << "Element found " << *it << ".\n";
  	else
   		std::cout << "Element not found.\n";
}

#endif
