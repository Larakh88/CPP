/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:31:19 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 15:59:13 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	zombieHorde = new Zombie[N];
	int	i;

	for (i = 0; i < N; i++)
		zombieHorde[i].setName(name);

	return (zombieHorde);
}