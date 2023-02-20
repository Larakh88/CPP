/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:52:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/20 22:08:04 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {
private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_Nickname;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;

public:
	Contact(void);
	~Contact(void);
	void		setFirst(std::string fn);
	void		setLast(std::string	ln);
	void		setNickname(std::string nn);
	void		setPhone(std::string phone);
	void		setSecret(std::string secret);
	std::string	getFirst(void) const;
	std::string	getLast(void) const;
	std::string	getNickname(void) const;
	std::string	getPhone(void) const;
	std::string	getSecret(void) const;
};

#endif