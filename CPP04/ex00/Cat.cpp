/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:37 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 14:34:35 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << this->_type << " - Cat Default Constructor Called!\n";
}

Cat::Cat(std::string type) :	Animal(type)
{
	std::cout << this->_type << " - Cat String Constructor Called!\n";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor Called!\n";
	*this = copy;
}

Cat::~Cat(void)
{
	std::cout << this->_type << " - Cat Destructor Called!\n";
}

Cat		&Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << this->_type << " - Cat Copy Assignment Called!\n";
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meawwww....\n";
}
