/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:35 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/02 15:32:03 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

class  Serializer {
public:	
	 Serializer();
	 Serializer(const Serializer &copy);
	 ~Serializer();
	 
	 Serializer	&operator=(const Serializer &copy);
	 uintptr_t	serialize(Data* ptr);
	 Data		*deserialize(uintptr_t raw);
};

#endif
