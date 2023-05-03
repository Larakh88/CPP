/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:35 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/03 14:57:42 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>
//#include <stdint.h> //this is required for valgrind as it's linux.

class  Serializer {
private:
	Serializer();
	Serializer(const Serializer &copy);
	Serializer	&operator=(const Serializer &copy);

public:
	~Serializer();
	static uintptr_t	serialize(Data* ptr);
	static Data		*deserialize(uintptr_t raw);
};

#endif
