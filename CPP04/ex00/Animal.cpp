/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:14 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/20 14:39:30 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Unknown")
{
	std::cout << this->_type << " - Animal Default Constructor Called!\n";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << this->_type << " - Animal String Constructor Called!\n";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor Called!\n";
	*this = copy;
}

Animal::~Animal(void)
{
	std::cout << this->_type << " - Animal Destructor Called!\n";
}

Animal		&Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << this->_type << " - Animal Copy Assignment Called!\n";
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Specify Animal for appropriate sound!\n";
}
