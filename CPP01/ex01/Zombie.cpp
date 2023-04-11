/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:33:58 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 15:59:07 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Anonymous Zombie")
{
	return;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "\033[34m" << this->_name << "\033[30m" << ": Zombie Destroyed!" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << "\033[34m" << this->_name << "\033[30m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}