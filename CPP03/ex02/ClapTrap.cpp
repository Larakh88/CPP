/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:40:02 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 17:48:45 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) : _name("Unknown"), _hit(10), _damage(0), _energy(10)
{
	std::cout << this->_name << ": ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap (std::string name) : _name(name), _hit(10), _damage(0), _energy(10)
{
	std::cout << this->_name << ": ClapTrap String constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy constructor called!" << std::endl;
	*this = copy;
	return;
}

ClapTrap::~ClapTrap (void)
{
	std::cout << this->_name << ": ClapTrap Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_damage = copy._damage;
		this->_energy = copy._energy;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_damage;
		std::cout << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy or hit points to attack";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit - amount <= 0)
    {
        this->_hit = 0;
        std::cout << "ClapTrap " << _name << " takes damage and has now 0 hit points." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    this->_hit = this->_hit - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_hit = this->_hit + amount;
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " is repairing itself. It is getting ";
		std::cout << amount << " hit points back. Its total hit points is now " << this->_hit;
		std::cout << ". Its final energy points is now " << this->_energy << std::endl;
	}
	else if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy points to repair.";
		std::cout << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
}
