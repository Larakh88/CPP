/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:49 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/26 21:51:19 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
private:
	const std::string	_name;
	bool				_signed;
	const int			_sgrade;
	const int			_egrade;

public:
	Form();
	Form(std::string name, const int sgrade, const int egrade);
	Form(const Form &copy);
	~Form();

	Form				&operator=(const Form &copy);
	const std::string	getName() const;
	bool				getSigned() const;
	int					getSgrade() const;
	int					getEgrade() const;
	void				exc();
	void				beSigned(const Bureaucrat &bur);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Form &copy);
#endif
