/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:27:50 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/26 22:13:40 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\033[1;34m" << "To show that when I instantiate a class with low/high grade, an error will be thrown.\n" << "\033[0;37m";
	try {
		int	sgrade = 789;
		int	egrade = 50;
		AForm	F1("F1", sgrade, egrade);
		std::cout << F1;
	}
	catch (std::exception &e) {
		e.what();
	}

	std::cout << "\033[1;34m" << "\nChanging status of a Form to signed\n" << "\033[0;37m";
	Bureaucrat	b("a", 50);
	AForm		f("f", 60, 80);

	b.signForm(f);
	std::cout << f;

	std::cout << "\033[1;34m" << "\nCatching an error when the Form can't be signed\n" << "\033[0;37m";
	Bureaucrat	a("a", 50);
	AForm		form("f", 40, 80);

	a.signForm(form);
	std::cout << form;
	return (0);
}
