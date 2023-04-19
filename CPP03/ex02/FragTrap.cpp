/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:26:16 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 17:48:41 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << this->_name << ": FragTrap Default Constructor Called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << this->_name << ": FragTrap String Constructor Called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Constructor Called!" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << ": FragTrap Destructor Called!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Assignment Operator Called!" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_damage = copy._damage;
		this->_energy = copy._energy;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " Requests a positive High Five!" << std::endl;
}