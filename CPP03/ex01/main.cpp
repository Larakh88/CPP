/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:38:30 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 17:51:16 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scav("Scav");
	ScavTrap	scav1("Scav1");
	ScavTrap	scav2;

	std::cout << std::endl;
	scav.attack("Scav1");
	scav1.beRepaired(10);
	scav1.guardGate();
	
	std::cout << std::endl;
	scav2 = scav;
	scav.attack("Scav2");
	scav2.beRepaired(10);
	std::cout << std::endl;
}