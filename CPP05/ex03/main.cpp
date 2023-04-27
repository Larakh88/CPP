/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:27:50 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 15:19:13 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// std::cout << "\033[1;34m" << "Testing Presidential Pardon Form Signature.\n" << "\033[0;37m";
	// Bureaucrat	n("n", 4);
	// Bureaucrat	ls("ls", 30);
	// Bureaucrat	le("le", 6);
	
	// try {
	// 	PresidentialPardonForm	p("Person"); //sign 25, exec 5
	// 	std::cout << "\033[0;34m" << "Successful Case: \n" << "\033[0;37m";
	// 	p.beSigned(n);
	// 	std::cout << p;
	// 	p.execute(n);
	// 	// std::cout << "\033[0;34m" << "Low Grade for Signature Case: \n" << "\033[0;37m";
	// 	// p.beSigned(ls);
	// 	// std::cout << p;
	// 	// p.execute(ls);
	// 	std::cout << "\033[0;34m" << "Low Grade for Execution Case: \n" << "\033[0;37m";
	// 	p.beSigned(le);
	// 	std::cout << p;
	// 	p.execute(le);
	// }
	// catch(std::exception &e)
	// {
	// 	e.what();
	// }
	
	// std::cout << "\033[1;34m" << "Testing Robotomy Request Form Signature.\n" << "\033[0;37m";
	// Bureaucrat	n("n", 40);
	// Bureaucrat	ls("ls", 75);
	// Bureaucrat	le("le", 50);
	
	// try {
	// 	RobotomyRequestForm	p("Person"); //sign 72, exec 45
	// 	std::cout << "\033[0;34m" << "Successful Case: \n" << "\033[0;37m";
	// 	p.beSigned(n);
	// 	std::cout << p;
	// 	p.execute(n);
	// 	p.execute(n); // this is to show the 50%
	// 	std::cout << "\033[0;34m" << "Low Grade for Signature Case: \n" << "\033[0;37m";
	// 	p.beSigned(ls);
	// 	std::cout << p;
	// 	p.execute(ls);
	// 	std::cout << "\033[0;34m" << "Low Grade for Execution Case: \n" << "\033[0;37m";
	// 	p.beSigned(le);
	// 	std::cout << p;
	// 	p.execute(le);
	// }
	// catch(std::exception &e)
	// {
	// 	e.what();
	// }
	
	// std::cout << "\033[1;34m" << "Testing Shrubbery Creation Form Signature.\n" << "\033[0;37m";
	// Bureaucrat	n("n", 120);
	// Bureaucrat	ls("ls", 148);
	// Bureaucrat	le("le", 139);
	
	// try {
	// 	ShrubberyCreationForm	p("Person"); //145, exec 137
	// 	std::cout << "\033[0;34m" << "Successful Case: \n" << "\033[0;37m";
	// 	p.beSigned(n);
	// 	std::cout << p;
	// 	p.execute(n);
	// 	std::cout << "\033[0;34m" << "Low Grade for Signature Case: \n" << "\033[0;37m";
	// 	p.beSigned(ls);
	// 	std::cout << p;
	// 	p.execute(ls);
	// 	std::cout << "\033[0;34m" << "Low Grade for Execution Case: \n" << "\033[0;37m";
	// 	p.beSigned(le);
	// 	std::cout << p;
	// 	p.execute(le);
	// }
	// catch(std::exception &e)
	// {
	// 	e.what();
	// }
	
	std::cout << "\033[1;34m" << "Testing Bureaucrat Executing Form.\n" << "\033[0;37m";
	//Bureaucrat	n("n", 4); // successful case
	//Bureaucrat n("n", 100); // success for Shrubbery, fail for Robotomy and Presidential
	//Bureaucrat n("n", 67); // success for Shrubbery, Robotomy can sign but not execute and fail for Presidential
	Bureaucrat n("n", 20); //success for Shrubbery and Robotomy, Presidential can sign but not execute
		
	try {
		ShrubberyCreationForm	s("Shrub"); //145, exec 137
		RobotomyRequestForm		r("Robot"); //sign 72, exec 45
		PresidentialPardonForm	p("President"); //sign 25, exec 5
		
		std::cout << "\033[0;34m" << "Successful Case: \n" << "\033[0;37m";
		n.signForm(s);
		n.executeForm(s);
		n.signForm(r);
		n.executeForm(r);
		n.signForm(p);
		n.executeForm(p);
	}
	catch(std::exception &e)
	{
		e.what();
	 }
	return (0);
}
