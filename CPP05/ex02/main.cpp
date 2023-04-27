/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:27:50 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 07:34:58 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "\033[1;34m" << "To show that when I instantiate a class with low/high grade, an error will be thrown.\n" << "\033[0;37m";
	PresidentialPardonForm	f("home");
	Bureaucrat	b("b", 20);
	f.beSigned(b);
	std::cout << f << std::endl;
	return (0);
}
