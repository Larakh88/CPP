/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:40:13 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/19 15:58:22 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
protected:
	std::string	_name;
	int			_hit;
	int			_damage;
	int			_energy;

public:

	ClapTrap (void);
	ClapTrap (std::string name);
	~ClapTrap (void);
	
	ClapTrap(const ClapTrap &copy);
	
	ClapTrap	&operator=(const ClapTrap &copy);
	
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
