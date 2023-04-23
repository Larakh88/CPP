/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:28 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/23 23:32:46 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongCat.hpp"

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
	std::cout << std::endl;
	
	const wrongAnimal* a = new wrongAnimal();
	const wrongAnimal* c = new wrongCat();
	std::cout << std::endl;
	
	std::cout << a->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl << std::endl;

	a->makeSound();
	c->makeSound();
	std::cout << std::endl;

	delete a;
	delete c;
	return 0;
}
