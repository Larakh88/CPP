/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:30:15 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/11 17:07:32 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
private:
	std::string	_type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	void				setType(std::string newType);
	std::string const	&getType(void) const;
};

#endif