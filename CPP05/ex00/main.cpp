/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:27:50 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/01 11:16:07 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\033[1;34m" << "To show that when I instantiate a class with low/high grade, an error will be thrown.\n" << "\033[0;37m";
	try {
		Bureaucrat high("High", -3456789);
		std::cout << high;
	}
	catch (std::exception &e) {
		e.what();
	}
	
	try {
		Bureaucrat low("Low", 234567);
		std::cout << low;
	}
	catch (std::exception &e) {
		e.what();
	}

	std::cout << "\033[1;34m" << "\nTo show that in increment and decrement, an error will be thrown.\n" << "\033[0;37m";
	try {
		Bureaucrat normal("Normal", 149);
		normal.decr();
		std::cout << normal;
		normal.decr();
		std::cout << normal;
	}
	catch (std::exception &e) {
		e.what();
	}

	try {
		Bureaucrat normal1("Normal 1", 1);
		normal1.incr();
		std::cout << normal1;
	}
	catch (std::exception &e) {
		e.what();
	}
	// std::cout << "\033[1;34m" << "\nTo prove that even when assigning a low grade object, an error will be thrown.\n" << "\033[0;37m";
	// try {
	// 	Bureaucrat a("a", 234567);
	// 	std::cout << a;
	// 	Bureaucrat b;
	
	// 	b = a;
	// 	std::cout << b;
	// }
	// catch (std::exception &e) {
	// 	e.what();
	// }
	return (0);
}
