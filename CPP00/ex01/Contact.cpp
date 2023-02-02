/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:59 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/02 12:31:05 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string s1, std::string s2, std::string s3, int nb, std::string s4) :
FirstName(s1),
LastName(s2),
Nickname(s3),
PhoneNumber(nb),
DarkestSecret(s4)
{
	std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;
	std::cout << "First Name: " << this->FirstName << std::endl;
	std::cout << "Last Name: " << this->LastName << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Thank you for using My Awesome PhoneBook...Bye!" << std::endl;
}