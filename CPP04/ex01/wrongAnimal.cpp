/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:50:25 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/23 20:06:52 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(void) : _type("Unknown Wrong Animal")
{
	std::cout << this->_type << " - wrongAnimal Default Constructor Called!\n";
}

wrongAnimal::wrongAnimal(std::string type) : _type(type)
{
	std::cout << this->_type << " - wrongAnimal String Constructor Called!\n";
}

wrongAnimal::wrongAnimal(const wrongAnimal &copy)
{
	std::cout << "wrongAnimal Copy Constructor Called!\n";
	*this = copy;
}

wrongAnimal::~wrongAnimal(void)
{
	std::cout << this->_type << " - wrongAnimal Destructor Called!\n";
}

wrongAnimal		&wrongAnimal::operator=(const wrongAnimal &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << this->_type << " - wrongAnimal Copy Assignment Called!\n";
	return (*this);
}

std::string	wrongAnimal::getType(void) const
{
	return (this->_type);
}

void	wrongAnimal::makeSound(void) const
{
	std::cout << "Specify wrongAnimal for appropriate sound!\n";
}
