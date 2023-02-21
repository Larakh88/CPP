/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:03:54 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/21 08:40:29 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
	Contact Contacts[8];
	static int	size;
	
	static int	getSize(void);

public:
	PhoneBook(void);
	~PhoneBook(void);
	void		setContact(std::string info[5], int i);
	void		printContact(int i) const;
	void		printIndexTable(int i) const;
};

#endif