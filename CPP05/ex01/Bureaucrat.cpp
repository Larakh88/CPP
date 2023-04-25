/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:27:48 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/25 14:35:45 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(1)
{
	std::cout << this->_name << " - Bureaucrat Default Constructor Called.\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << this->_name << " - Bureaucrat Data Constructor Called.\n";
	tcatch();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << this->_name << " - Bureaucrat Copy Constructor Called.\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_name << " - Bureaucrat Destructor Called.\n";
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << this->_name << " - Assignment Operator Called.\n";
	if (this != &copy)
	{
		this->_grade = copy.getGrade();
		std::cout << "\033[0;34m" << "Only grade was copied. Name is const so Default name was assigned.\n" << "\033[0;37m";
	}
	tcatch();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &copy)
{
	o << copy.getName() << " - Bureaucrat grade is: " << copy.getGrade() << ".\n";
	return (o);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::incr()
{
	this->_grade--;
	tcatch();
}

void	Bureaucrat::decr()
{
	this->_grade++;
	tcatch();
}

void	Bureaucrat::exc()
{
	if(this->_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (this->_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::tcatch()
{
	try {
		Bureaucrat::exc();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		e.printMessage();
		this->_grade = 1;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		e.printMessage();
		this->_grade = 150;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() {}

void	Bureaucrat::GradeTooHighException::printMessage()
{
	std::cout << "Grade is Too High. Grade was set to 1.\n";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() {}

void	Bureaucrat::GradeTooLowException::printMessage()
{
	std::cout << "Grade is Too Low. Grade was set to 150.\n";
}
