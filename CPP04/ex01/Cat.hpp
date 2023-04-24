/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:34 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 14:33:33 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *brain;

public:
	Cat (void);
	Cat (std::string type);
	Cat (const Cat &copy);
	~Cat (void);
	
	Cat		&operator=(const Cat &copy);
	void	makeSound(void) const;
	void	printBrain(int i) const;
	void	setIdea(int i, std::string newIdea);
};

#endif
