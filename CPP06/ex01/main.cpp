/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:07:04 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/03 14:56:58 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		Lara;
	uintptr_t	a; //unsigned integer type that is capable of holding a pointer - it's the same size as a pointer
	Data		*test;
	
	Lara.name = "Lara";
	Lara.age = 34;
	
	a = Serializer::serialize(&Lara);
	test = Serializer::deserialize(a);
	
	std::cout << "test details: \n" << test->name << std::endl << test->age << std::endl;
	
}
