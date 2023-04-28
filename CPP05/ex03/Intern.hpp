/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:31:19 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/28 10:19:59 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();
	
	Intern	&operator=(const Intern &copy);
	AForm	*makeForm(std::string form, std::string target); 
};

#endif
