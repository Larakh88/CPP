/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:16:09 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/24 12:57:30 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
protected:
	std::string *ideas;

public:
	Brain(void);
	Brain(const Brain &copy);
	~Brain(void);
	
	Brain	&operator=(const Brain &copy);
	void	printBrain(int i) const;
	void	setIdea(int i, std::string newIdea);
};

#endif 
