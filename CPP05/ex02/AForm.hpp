/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:36:49 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/27 07:35:04 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class AForm {
private:
	const std::string	_name;
	bool				_signed;
	const int			_sgrade;
	const int			_egrade;

public:
	AForm();
	AForm(std::string name, const int sgrade, const int egrade);
	AForm(const AForm &copy);
	virtual ~AForm();

	AForm				&operator=(const AForm &copy);
	const std::string	getName() const;
	bool				getSigned() const;
	int					getSgrade() const;
	int					getEgrade() const;
	void				exc();
	virtual void		beSigned(const Bureaucrat &bur);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const AForm &copy);
#endif
