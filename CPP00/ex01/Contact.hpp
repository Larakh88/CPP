/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:52:08 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/01 20:15:50 by lel-khou         ###   ########.fr       */
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

};

#endif