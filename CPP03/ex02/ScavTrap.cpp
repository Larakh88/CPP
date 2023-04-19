/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:57:56 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 17:49:04 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (void)
{
	this->_hit = 100;
	this->_damage = 20;
	this->_energy = 50;
	std::cout << this->_name << ": ScavTrap Default Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_damage = 20;
	this->_energy = 50;
	std::cout << this->_name << ": ScavTrap string Constructor Called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy constructor called!" << std::endl;
	*this = copy;
	return;
}

ScavTrap::~ScavTrap (void)
{
	std::cout << this->_name << ": ScavTrap Destructor Called!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_damage = copy._damage;
		this->_energy = copy._energy;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_damage;
		std::cout << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have enough energy or hit points to attack";
		std::cout << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << "ScavTrap is now in Gate keeper mode." << std::endl;
}