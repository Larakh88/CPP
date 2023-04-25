/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:16:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/25 09:07:29 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = "Unkown Ideas.";
	std::cout << "Brain Default Constructor Called.\n";
}

Brain::Brain(const Brain &copy)
{
	this->ideas = new std::string[100];
	if (this->ideas)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain Copy Constructor Called.\n";
}

Brain::~Brain(void)
{
	delete [] ideas;
	std::cout << "Brain Destructor Called.\n";
}

Brain	&Brain::operator=(const Brain &copy)
{
	if(this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain Copy Assignment Called.\n";
	return (*this);
}

void	Brain::printBrain(int i) const
{
	std::cout << this->ideas[i] << std::endl;
}

void	Brain::setIdea(int i, std::string newIdea)
{
	this->ideas[i] = newIdea;
}
