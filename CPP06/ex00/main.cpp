/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:12:06 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/01 12:03:44 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ScalarConverter		convert(argv[1]);
		std::cout << convert;
	}
	else
		std::cout << "\033[1;31m" << "Please enter one parameter to be converted!\n" << "\033[0;37m";
}
