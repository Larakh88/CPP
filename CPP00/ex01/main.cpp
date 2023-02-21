/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:00:23 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/21 08:01:08 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static int	is_number(std::string number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if ((number[i] < '0' || number[i] > '9') && number[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int main (void)
{
		PhoneBook PhoneBook1;
		std::string	str;
		std::string info[5];
		std::string	temp;
		int	i;
		int	index;

		i = 0;
		while (1)
		{
			std::cout << "\033[34m" << "Enter your input: " << "\033[30m";
			getline(std::cin, str);
			if (str == "ADD")
			{
				if (i > 7)
					i = 0;
				std::cout << "\033[34m" << "Enter your First Name: " << "\033[30m";
    			getline(std::cin, info[0]);
				std::cout << "\033[34m" << "Enter your Last Name: " << "\033[30m";
				getline(std::cin, info[1]);
				std::cout << "\033[34m" << "Enter your Nickname: " << "\033[30m";
				getline(std::cin, info[2]);
				std::cout << "\033[34m" << "Enter your Phone Number: " << "\033[30m";
				getline(std::cin, temp);
				while (is_number(temp) == 0)
				{
					std::cout << "\033[31m" << "Enter a Valid Phone Number!" << "\033[30m" << std::endl;
					getline(std::cin, temp);
				}
				info[3] = temp;
				std::cout << "\033[34m" << "Enter your Darkest Secret: " << "\033[30m";
				getline(std::cin, info[4]);
				if (info[0].length() != 0 && info[1].length() !=0 && info[2].length() != 0 \
				&& info[3].length() != 0 && info[4].length() != 0)
				{
					PhoneBook1.setContact(info, i);
					std::cout << "\033[0;31m" << "Contact was added!" << "\033[30m" << std::endl;
					i++;
				}
				else
					std::cout << "\033[0;31m" << "Contact cannot be added, blank value inserted!" << "\033[30m" << std::endl;
			}
			else if (str == "SEARCH")
			{
				PhoneBook1.printIndexTable(i);
				std::cout << "\033[34m" << "Enter the index of the entry to display: " << "\033[30m";
				std::cin >> index;
				if (index <= i - 1 && index >= 0 && std::cin.fail() == 0)
					PhoneBook1.printContact(index);
				else
					std::cout << "\033[31m" << "Index not within range! " << "\033[30m" << std::endl;
				std::cin.clear();
				std::getline(std::cin, str);
			}
			else if (str == "EXIT")
				break ;
			else
			{
				std::cout << "\033[31m" << "Enter a valid command; ADD, SEARCH or EXIT" << std::endl;
			}
		}
}
