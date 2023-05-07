/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:31:18 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/07 14:29:05 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template< typename T>
class Array{
private:
	T	*_arr;
	int	_size;

public:
	Array<T>(void);
	Array<T>(unsigned int size);
	Array<T>(const Array &copy);
	
	Array	&operator=(const Array &copy);
	T		&operator[](int pos);
	unsigned int	size() const;
	
	~Array<T>(void);
	
	class IndexOutOfBound : public std::exception {
	public:
		virtual const char *what() const throw();
	};

};

#include "Array.tpp"

#endif