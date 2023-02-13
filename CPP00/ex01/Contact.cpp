/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:59 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/13 20:48:27 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

Contact::Contact(void)
{
	std::string	temp;

	std::cout << "\033[34m" << "Enter your First Name: " << "\033[30m";
	getline(std::cin, this->FirstName);
	std::cout << "\033[34m" << "Enter your Last Name: " << "\033[30m";
	getline(std::cin, this->LastName);
	std::cout << "\033[34m" << "Enter your Nickname: " << "\033[30m";
	getline(std::cin, this->Nickname);
	std::cout << "\033[34m" << "Enter your Phone Number: " << "\033[30m";
	getline(std::cin, temp);
	while (is_number(temp) == 0)
	{
		std::cout << "\033[31m" << "Enter a Valid Phone Number!" << "\033[30m" << std::endl;
		getline(std::cin, temp);
	}
	this->PhoneNumber = temp;
	std::cout << "\033[34m" << "Enter your Darkest Secret: " << "\033[30m";
	getline(std::cin, this->DarkestSecret);
 	return;
}

Contact::~Contact(void)
{
	return;
}