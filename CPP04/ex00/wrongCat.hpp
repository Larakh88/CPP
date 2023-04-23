/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:50:36 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/23 20:16:36 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal {
public:
	wrongCat(void);
	wrongCat (std::string type);
	wrongCat (const wrongCat &copy);
	~wrongCat (void);
	
	wrongCat	&operator=(const wrongCat &copy);
	void		makeSound(void) const;
};

#endif