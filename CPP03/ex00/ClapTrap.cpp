/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:40:02 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/18 12:42:18 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap (void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
		this->_name = copy.
		
	return (*this);
}
