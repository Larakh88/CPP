/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:12:06 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/01 21:23:35 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ScalarConverter.hpp"

#include <cstdlib>
#include <iostream>
#include <sstream>

int main(int argc, char **argv)
{
	/* use the below to check if it's an int or not. Check if atoi is allowed here or not*/
	int i;

	i = atoi(argv[1]);
	std::string s;
	std::stringstream out;
	out << i;
	s = out.str();
	if (s == argv[1])
		std::cout << "same.\n";
	// if (argc == 2)
	// {
	// 	ScalarConverter		convert(argv[1]);
	// 	std::cout << convert;
	// }
	// else
	// 	std::cout << "\033[1;31m" << "Please enter one parameter to be converted!\n" << "\033[0;37m";
}
