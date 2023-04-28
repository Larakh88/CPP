/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:14:35 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/28 10:45:33 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << "Shrubbery Creation Form Constructor Called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Shrubbery Creation Form String Constructor Called.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	std::cout << "Shrubbery Creation Form Copy Constructor Called.\n";
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form Destructor Called.\n";
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	std::cout << "Shrubbery Creation Form Assignment Constructor Called.\n";
	if (this != &copy)
		this->_target = copy._target;
	return (*this);
}

void				ShrubberyCreationForm::action() const
{
	std::ofstream	shrub((_target + "_shrubbery").c_str());
	if (!shrub.good())
	{
		std::cout << "File Error.\n";
		return ;
	}
	shrub << "\n                   +---(8)\n";
    shrub << "                   |      \n";
	shrub << "              +---(4)     \n";
	shrub << "              |    |      \n";
	shrub << "              |    +---(9)\n";
	shrub << "              |           \n";
	shrub << "         +---(2)          \n";
	shrub << "         |    |           \n";
	shrub << "         |    +---(10)    \n";
	shrub << "         |                \n";
	shrub << "         |    +---(11)    \n";
	shrub << "         |    |           \n";
	shrub << "         +---(3)          \n";
	shrub << "              |           \n";
	shrub << "              +---(12)    \n\n";
	std::cout << "ASCII Tree File Generated\n";
}
