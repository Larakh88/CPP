/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:50:33 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/23 20:06:58 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	wrongAnimal {
protected:
	std::string	_type;	

public:
	wrongAnimal(void);
	wrongAnimal(std::string type);
	wrongAnimal(const wrongAnimal &copy);
	virtual ~wrongAnimal(void);

	wrongAnimal		&operator=(const wrongAnimal &copy);
	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif