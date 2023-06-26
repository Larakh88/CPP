/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:05:22 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/26 19:50:05 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	operation = argv[1];
		if (!operation.empty() && operation.find_first_of("0123456789+/-*") != std::string::npos)
		{
			if (operation.find_first_not_of("0123456789+/-* ") != std::string::npos)
			{
				std::cout << "Error: Wrong input\n";
				return (1);
			}
			RPN	rpn(operation);
			rpn.execute();
		}
		else
			std::cout << "Error: Wrong input\n";
	}
	else
		std::cout << "Error: Wrong input\n";
}
