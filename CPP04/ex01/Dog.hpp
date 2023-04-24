/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 14:33:30 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
private:
	Brain *brain;

public:
	Dog (void);
	Dog (std::string type);
	Dog (const Dog &copy);
	~Dog (void);
	
	Dog		&operator=(const Dog &copy);
	void	makeSound(void) const;
	void	printBrain(int i) const;
	void	setIdea(int i, std::string newIdea);
};

#endif
