/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:33:24 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 12:35:31 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*	zombie;
	int		N;
	int		i;
	std::string	name;

	N = 4;
	name = "zombieHorde";
	zombie = zombieHorde(N, name);
	for (i = 0; i < N; i++)
		zombie[i].announce();
	delete [] zombie;
}