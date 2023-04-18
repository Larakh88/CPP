/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:40:13 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/18 12:44:34 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
private:
	std::string	_name;
	int			_hit = 10;
	int			_energy = 10;
	int			_damage = 0;

public:

	ClapTrap (void);
	~ClapTrap (void);
	
	ClapTrap(const ClapTrap &copy);
	
	ClapTrap	&operator=(const ClapTrap &copy);
	
	void	setName(const std::string name);
	void	setHit(const int hit);
	void	setEnergy(const int energy);
	void	setDamage(const int damage);
	
	
	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
