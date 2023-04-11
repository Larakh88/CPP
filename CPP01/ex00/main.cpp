/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:33:24 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 12:35:56 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	Zombie1;
	Zombie	Foo("Foo");
	Zombie*	Zombie2;

	Zombie1.announce();
	Foo.announce();
	std::cout << std::endl;
	Zombie2 = newZombie("newZombie");
	Zombie2->announce();
	std::cout << std::endl;
	randomChump("randomChump");
	std::cout << std::endl;
	delete(Zombie2);
	std::cout << std::endl;
	return (0);
}