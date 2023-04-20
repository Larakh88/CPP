/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/20 14:33:19 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal {
public:
	Dog (void);
	Dog (std::string type);
	Dog (const Dog &copy);
	~Dog (void);
	
	Dog		&operator=(const Dog &copy);
	void	makeSound(void) const;
};

#endif
