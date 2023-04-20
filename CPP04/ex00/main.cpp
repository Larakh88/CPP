/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:28 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/20 14:39:27 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat	cat1("Gigi");
	std::cout << std::endl;
	
	std::cout << cat1.getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	cat1.makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;
	return 0;
}
