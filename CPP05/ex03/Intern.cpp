/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:31:22 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 15:19:12 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Constructor Called.\n";
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern Copy Constructor Called.\n";
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor Called.\n";
}

Intern	&Intern::operator=(const Intern &copy)
{
	std::cout << "Intern Assignment Operator Called.\n";
	return (*this);
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string	name[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int i = 0;
	for (i; i < 3; i++)
	{
		if (form == name[i])
		{
			std::cout << "Intern creates " << form << std::endl;
		}
	}
	if (i == 3)
		throw()
}
