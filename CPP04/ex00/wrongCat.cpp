/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:50:37 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 09:13:27 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

wrongCat::wrongCat(void) : wrongAnimal("wrongCat")
{
	std::cout << this->_type << " - wrongCat Default Constructor Called!\n";
}

wrongCat::wrongCat(std::string type) :	wrongAnimal(type)
{
	std::cout << this->_type << " - wrongCat String Constructor Called!\n";
}

wrongCat::wrongCat(const wrongCat &copy) : wrongAnimal(copy)
{
	std::cout << "wrongCat Copy Constructor Called!\n";
	*this = copy;
}

wrongCat::~wrongCat(void)
{
	std::cout << this->_type << " - wrongCat Destructor Called!\n";
}

wrongCat		&wrongCat::operator=(const wrongCat &copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << this->_type << " - wrongCat Copy Assignment Called!\n";
	return (*this);
}

void	wrongCat::makeSound(void) const
{
	std::cout << "Wrong Meawwww....\n";
}
