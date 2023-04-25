/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:28 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/25 09:07:19 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\033[1;34m" << "Leak testing as per subject:\n" << "\033[0;30m";
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;
	
	std::cout << "\033[1;34m" << "Deep Copy Testing:\n" << "\033[0;30m";
	Dog *dog = new Dog();
	std::cout << std::endl;
	Dog *newDog = new Dog(*dog);
	std::cout << std::endl;
	std::cout << "Before: dog Idea 0 is - ";	
	dog->printBrain(0);
	dog->setIdea(0, "Hello");
	std::cout << "After dog Idea 0 is - ";
	dog->printBrain(0);
	std::cout << "newDog Idea 0 is - ";
	newDog->printBrain(0);
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete newDog;
	
	std::cout << "\033[1;34m" << "Array of Animals:\n" << "\033[0;30m";
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
	{
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; i++)
	{
		animals[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}
	std::cout << "\033[0;37m";
	
	return 0;
}
