/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:52:46 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 17:55:59 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap	lara("Lara");
    ClapTrap	clap("Clap");

    clap.attack("Lara");
    lara.takeDamage(10);
    lara.beRepaired(5);

	std::cout << std::endl;
    lara.attack("Clap");
    clap.takeDamage(5);
    clap.beRepaired(1000);

	std::cout << std::endl;
	ClapTrap	newClap;
	newClap = clap;

	std::cout << std::endl;
	clap.attack("newClap");
	newClap.takeDamage(1005);
	newClap.beRepaired(5);

    return 0;
}
