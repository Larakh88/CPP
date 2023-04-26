/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:47 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/26 21:51:14 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _signed(0), _sgrade(75), _egrade(100)
{
	std::cout << this->_name << " - Form Constructor Called.\n";
}

Form::Form(std::string name, const int sgrade, const int egrade) : _name(name), _signed(0), _sgrade(sgrade), _egrade(egrade)
{
	std::cout << this->_name << " - Form Data Constructor Called.\n";
	exc();
}

Form::Form(const Form &copy) : _name(copy.getName()), _signed(copy.getSigned()), _sgrade(copy.getSgrade()), _egrade(copy.getEgrade())
{
	std::cout << this->_name << " - Form Copy Constructor Called.\n ";
	exc();
}

Form::~Form()
{
	std::cout << this->_name << " - Form Destructor Called.\n";
}

Form				&Form::operator=(const Form &copy)
{
	std::cout << this->_name << " - Form Assignment Operator Called.\n";
	if (this != &copy)
	{
		this->_signed = copy.getSigned();
		std::cout << "\033[0;34m" << "Only signed was copied. Name, sgrade and egrade are const so Default values were assigned.\n" << "\033[0;37m";
	}
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool				Form::getSigned() const
{
	return (this->_signed);
}

int					Form::getSgrade() const
{
	return (this->_sgrade);
}

int					Form::getEgrade() const
{
	return (this->_egrade);
}

void				Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->_sgrade)
		this->_signed = 1;
	else
		throw(Form::GradeTooLowException());
}

void	Form::exc()
{
	if(this->_sgrade < 1 || this->_egrade < 1)
		throw(Form::GradeTooHighException());
	else if (this->_sgrade > 150 || this->_egrade > 150)
		throw(Form::GradeTooLowException());
}

const char	*Form::GradeTooHighException::what() const throw()
{
	std::cout << "Grade is Too High.\n";
	return (0);
}

const char *Form::GradeTooLowException::what() const throw()
{
	std::cout << "Grade is Too Low.\n";
	return (0);
}

std::ostream	&operator<<(std::ostream &o, const Form &copy)
{
	o << "\033[0;36m" << "Name: " << copy.getName() << std::endl << "Grade to sign: " << copy.getSgrade() << std::endl;
	o << "Grade to execute: " << copy.getEgrade() << std::endl << "Is Signed: " << copy.getSigned() << "\033[0;37m" << std::endl;
	return (o);
}
