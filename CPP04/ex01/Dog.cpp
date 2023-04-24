/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:32 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 14:33:28 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << this->_type << " - Dog Default Constructor Called!\n";
}

Dog::Dog(std::string type) :	Animal(type)
{
	this->brain = new Brain();
	std::cout << this->_type << " - Dog String Constructor Called!\n";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
	std::cout << this->_type << " - Dog Copy Constructor Called!\n";
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << this->_type << " - Dog Destructor Called!\n";
}

Dog		&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << this->_type << " - Dog Copy Assignment Called!\n";
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Barkkkk....\n";
}

void	Dog::printBrain(int i) const
{
	this->brain->printBrain(i);
}

void	Dog::setIdea(int i, std::string newIdea)
{
	this->brain->setIdea(i, newIdea);
}

