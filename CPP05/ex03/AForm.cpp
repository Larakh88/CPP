/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:47 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 12:00:50 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _signed(0), _sgrade(75), _egrade(100)
{
	std::cout << this->_name << " - AForm Constructor Called.\n";
}

AForm::AForm(std::string name, const int sgrade, const int egrade) : _name(name), _signed(0), _sgrade(sgrade), _egrade(egrade)
{
	std::cout << this->_name << " - AForm Data Constructor Called.\n";
	exc();
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _signed(copy.getSigned()), _sgrade(copy.getSgrade()), _egrade(copy.getEgrade())
{
	std::cout << this->_name << " - AForm Copy Constructor Called.\n ";
	exc();
}

AForm::~AForm()
{
	std::cout << this->_name << " - AForm Destructor Called.\n";
}

AForm				&AForm::operator=(const AForm &copy)
{
	std::cout << this->_name << " - AForm Assignment Operator Called.\n";
	if (this != &copy)
	{
		this->_signed = copy.getSigned();
		std::cout << "\033[0;34m" << "Only signed was copied. Name, sgrade and egrade are const so Default values were assigned.\n" << "\033[0;37m";
	}
	return (*this);
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

bool				AForm::getSigned() const
{
	return (this->_signed);
}

int					AForm::getSgrade() const
{
	return (this->_sgrade);
}

int					AForm::getEgrade() const
{
	return (this->_egrade);
}

void				AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->_sgrade)
		this->_signed = 1;
	else
		throw(AForm::GradeTooLowException());
}

void				AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw(AForm::GradeTooLowException());
	else
	{
		if (executor.getGrade() > this->getEgrade())
			throw(AForm::GradeTooLowException());
		else
			this->action();
	}
}

void	AForm::exc()
{
	if(this->_sgrade < 1 || this->_egrade < 1)
		throw(AForm::GradeTooHighException());
	else if (this->_sgrade > 150 || this->_egrade > 150)
		throw(AForm::GradeTooLowException());
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	std::cout << "Grade is Too High.\n";
	return (0);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	std::cout << "Grade is Too Low.\n";
	return (0);
}

std::ostream	&operator<<(std::ostream &o, const AForm &copy)
{
	o << "\033[0;36m" << "Name: " << copy.getName() << std::endl << "Grade to sign: " << copy.getSgrade() << std::endl;
	o << "Grade to execute: " << copy.getEgrade() << std::endl << "Is Signed: " << copy.getSigned() << "\033[0;37m" << std::endl;
	return (o);
}
