/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:10:31 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/21 07:59:52 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "\033[35m" <<"Welcome to My Awesome PhoneBook!" << "\033[30m" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\033[35m" << "Thank you for using My Awesome PhoneBook...Bye!" << "\033[30m" << std::endl;
}

void	PhoneBook::setContact(std::string info[5], int i)
{
	Contacts[i].setFirst(info[0]);
	Contacts[i].setLast(info[1]);
	Contacts[i].setNickname(info[2]);
	Contacts[i].setPhone(info[3]);
	Contacts[i].setSecret(info[4]);
	PhoneBook::size += 1;
}

void	PhoneBook::printContact(int i)
{
	std::cout << "First Name: " << Contacts[i].getFirst() << std::endl;
	std::cout << "Last Name: " << Contacts[i].getLast() << std::endl;
	std::cout << "Nickname Name: " << Contacts[i].getNickname() << std::endl;
	std::cout << "Phone Number: " << Contacts[i].getPhone() << std::endl;
	std::cout << "Darkest Secret: " << Contacts[i].getSecret() << std::endl;
}

void	cut_name(std::string s)
{
	
	if (s.length() > 10)
	{
		s.replace(9, 1, ".");
		std::cout << std::right << std::setw(10) << s.substr(0, 10) << "|";
	}
	else
		std::cout << std::right << std::setw(10) << s << "|";
}

void	PhoneBook::printIndexTable(int i)
{
	int	j;
	int	k;

	j = 0;
	if (PhoneBook::getSize() >= 8)
		i = 8;
	std::cout << "|" << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (j < i)
	{
		std::cout << "|" << std::right << std::setw(10) << j << "|";
		cut_name(Contacts[j].getFirst());
		cut_name(Contacts[j].getLast());
		cut_name(Contacts[j].getNickname());
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		j++;
	}
}

int	PhoneBook::getSize(void)
{
	return PhoneBook::size;
}

int	PhoneBook::size = 0;