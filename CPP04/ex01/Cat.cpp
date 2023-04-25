/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:37 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/25 09:07:37 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << this->_type << " - Cat Default Constructor Called!\n";
}

Cat::Cat(std::string type) :	Animal(type)
{
	this->brain = new Brain();
	std::cout << this->_type << " - Cat String Constructor Called!\n";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
	std::cout << this->_type << " - Cat Copy Constructor Called!\n";
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << this->_type << " - Cat Destructor Called!\n";
}

Cat		&Cat::operator=(const Cat &copy)
{
	if (this->brain)
		delete this->brain;
	if (this != &copy)
	{
		this->_type = copy._type;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << this->_type << " - Cat Copy Assignment Called!\n";
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meawwww....\n";
}

void	Cat::printBrain(int i) const
{
	this->brain->printBrain(i);
}

void	Cat::setIdea(int i, std::string newIdea)
{
	this->brain->setIdea(i, newIdea);
}
