/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 09:27:47 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/26 18:07:24 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;

public:	
	Bureaucrat();
	Bureaucrat(const std::string name, int i);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();
	
	Bureaucrat			&operator=(const Bureaucrat &copy);
	const std::string	getName() const;
	int					getGrade() const;
	void				incr();
	void				decr();
	void				exc();
	
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &copy);

#endif
