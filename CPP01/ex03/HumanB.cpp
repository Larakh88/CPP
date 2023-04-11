/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:56:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 19:55:40 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weaponB(NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weaponB = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weaponB == NULL)
		std::cout << this->_name << " attacks with no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << (this->_weaponB)->getType() << std::endl;
}