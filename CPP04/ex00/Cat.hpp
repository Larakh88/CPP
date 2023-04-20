/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:12:34 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/20 14:32:57 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat (void);
	Cat (std::string type);
	Cat (const Cat &copy);
	~Cat (void);
	
	Cat		&operator=(const Cat &copy);
	void	makeSound(void) const;
};

#endif
