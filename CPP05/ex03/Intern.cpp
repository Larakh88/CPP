/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:31:22 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/28 10:23:45 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	(void) copy;
	std::cout << "Intern Assignment Operator Called.\n";
	return (*this);
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	AForm	*ptr[3];
	ptr[0] = new ShrubberyCreationForm(target);
	ptr[1] = new RobotomyRequestForm(target);
	ptr[2] = new PresidentialPardonForm(target);
	std::string	name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (form == name[i])
		{
			std::cout << "Intern creates " << form << " form" << std::endl;
			for (int j = 0; j < i; j++)
				delete ptr[j];
			for (int j = i + 1; j < 3; j++)
				delete ptr[j];
			return (ptr[i]);
		}
	}
	std::cout << "Form does not exist, please select between shrubbery creation, robotomy request or presidential pardon.\n";
	delete ptr[0];
	delete ptr[1];
	delete ptr[2];
	return (0);
}
