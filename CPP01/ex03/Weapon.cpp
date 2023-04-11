/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:32:41 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 17:07:30 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("Unknown Weapon")
{
	return;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return;
} 

Weapon::~Weapon(void)
{
	return;
}

void			Weapon::setType(std::string newType)
{
	this->_type = newType;
}

std::string	const	&Weapon::getType(void) const
{
	return (this->_type);
}