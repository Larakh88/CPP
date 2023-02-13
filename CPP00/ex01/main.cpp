/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 12:00:23 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/13 19:35:24 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main (void)
{
		Contact Contact1;
		std::cout << "first name: " << Contact1.FirstName << std::endl;
		std::cout << "last name: " << Contact1.LastName << std::endl; 
		std::cout << "Nickname: " << Contact1.Nickname << std::endl;
		std::cout << "Phone Number: " << Contact1.PhoneNumber << std::endl;
		std::cout << "Darkest Secret: " << Contact1.DarkestSecret << std::endl;
}
