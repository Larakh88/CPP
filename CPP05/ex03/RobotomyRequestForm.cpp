/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:14:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 12:02:24 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	std::cout << "Robotomy Request Form Constructor Called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Robotomy Request Form String Constructor Called.\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	std::cout << "Robotomy Request Form Copy Constructor Called.\n";
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form Destructor Called.\n";
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	std::cout << "Robotomy Request Form Assignment Constructor Called.\n";
	if (this != &copy)
		this->_target = copy._target;
	return (*this);
}

void					RobotomyRequestForm::action() const
{
	std::cout << "Drilling Noisessssss.....\n";
	if (this->_nb % 2 == 0)
	{
		std::cout << this->_target << " has been robotomized successfully.\n";
	}
	else
	{
		std::cout << "Robotomy failed.\n";
	}
	this->_nb++;
}

int RobotomyRequestForm::_nb = 0;
