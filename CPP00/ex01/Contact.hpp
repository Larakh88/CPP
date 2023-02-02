/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:52:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/02 12:31:53 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
public:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	int		PhoneNumber;
	std::string	DarkestSecret;
	
	Contact(std::string s1, std::string s2, std::string s3, int nb, std::string s4);
	~Contact(void);
};

#endif