/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:17:42 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/13 18:28:10 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl1;

	std::cout << "\033[31m" << "Error Input: " << "\033[30m" << std::endl;
	harl1.complain("abs");
	harl1.complain("warning");
	std::cout << "\033[31m" << "DEBUG: " << "\033[30m" << std::endl;
	harl1.complain("DEBUG");
	std::cout << "\033[31m" << "INFO: " << "\033[30m" << std::endl;
	harl1.complain("INFO");
	std::cout << "\033[31m" << "WARNING: " << "\033[30m" << std::endl;
	harl1.complain("WARNING");
	std::cout << "\033[31m" << "ERROR: " << "\033[30m" << std::endl;
	harl1.complain("ERROR");
}
