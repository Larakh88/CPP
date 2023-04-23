/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:39 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/23 20:07:05 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal {
protected:
	std::string	_type;

public:	
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &copy);
	virtual ~Animal(void);
	
	Animal				&operator=(const Animal &copy);
	std::string			getType(void) const;
	virtual void		makeSound(void) const;
};

#endif
