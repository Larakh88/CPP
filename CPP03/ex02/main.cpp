/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:38:30 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 17:44:05 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap	frag("Frag");
	FragTrap	frag1("Frag1");
	FragTrap	frag2;

	std::cout << std::endl;
	frag.attack("Frag1");
	frag1.beRepaired(10);

	std::cout << std::endl;
	frag1.highFivesGuys();
	frag2.highFivesGuys();

	std::cout << std::endl;
	frag2 = frag;
	frag.attack("Frag2");
	frag2.beRepaired(10);
	
	std::cout << std::endl;
}