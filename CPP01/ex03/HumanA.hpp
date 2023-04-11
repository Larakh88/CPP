/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:09:34 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 23:14:59 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	Weapon		&_weaponA;
	std::string	_name;

public:
	HumanA(std::string name, Weapon &weaponA);
	~HumanA(void);
	void	attack(void) const;
};

#endif