/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:56:54 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/01 12:03:47 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {
private:
	std::string	_input;

public:	
	ScalarConverter(std::string input);
	ScalarConverter(const ScalarConverter &copy);
	~ScalarConverter();
	
	ScalarConverter	&operator=(const ScalarConverter &copy);
	std::string		getInput() const;
	operator float();
	operator int();
	operator char();
	operator double();
};

std::ostream	&operator<<(std::ostream &o, const ScalarConverter &copy);

#endif
