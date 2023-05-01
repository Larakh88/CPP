/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:07:04 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/01 13:09:04 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data		Lara;
	uintptr_t	a; //unsigned integer type that is capable of holding a pointer - it's the same size as a pointer
	Data		*test;
	Serializer	serial;
	
	Lara.name = "Lara";
	Lara.age = 34;
	
	a = serial.serialize(&Lara);
	test = serial.deserialize(a);
	
	std::cout << "address of test is: " << test << std::endl << "address of Lara is: " << &Lara << std::endl;
	std::cout << "test details: \n" << test->name << std::endl << test->age << std::endl;
	
}
