/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:54:59 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/20 22:08:09 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::setFirst(std::string fn)
{
	this->_FirstName = fn;
}

void	Contact::setLast(std::string	ln)
{
	this->_LastName = ln;
}

void	Contact::setNickname(std::string nn)
{
	this->_Nickname =nn;
}

void	Contact::setPhone(std::string phone)
{
	this->_PhoneNumber = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->_DarkestSecret = secret;
}

std::string	Contact::getFirst(void) const
{
	return this->_FirstName;
}

std::string	Contact::getLast(void) const
{
	return this->_LastName;
}

std::string	Contact::getNickname(void) const
{
	return this->_Nickname;	
}

std::string	Contact::getPhone(void) const
{
	return this->_PhoneNumber;
}

std::string	Contact::getSecret(void) const
{
	return this->_DarkestSecret;
}
