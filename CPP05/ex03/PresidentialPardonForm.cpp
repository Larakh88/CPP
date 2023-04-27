/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:14:28 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 11:02:44 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "Presidential Pardon Form Constructor Called.\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Presidential Pardon Form String Constructor Called.\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	std::cout << "Presidential Pardon Form Copy Constructor Called.\n";
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Form Destructor Called.\n";
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	std::cout << "Presidential Pardon Form Assignment Constructor Called.\n";
	if (this != &copy)
		this->_target = copy._target;
	return (*this);
}

void					PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}
