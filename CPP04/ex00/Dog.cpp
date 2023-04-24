/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:32 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 14:34:34 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << this->_type << " - Dog Default Constructor Called!\n";
}

Dog::Dog(std::string type) :	Animal(type)
{
	std::cout << this->_type << " - Dog String Constructor Called!\n";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor Called!\n";
	*this = copy;
}

Dog::~Dog(void)
{
	std::cout << this->_type << " - Dog Destructor Called!\n";
}

Dog		&Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << this->_type << " - Dog Copy Assignment Called!\n";
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Barkkkk....\n";
}
