/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:56:56 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/01 12:03:46 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string input) : _input(input)
{
	std::cout << "Constructor Called.\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : _input(copy.getInput())
{
	std::cout << "Copy Constructor Called.\n";
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor Called.\n";
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
		this->_input = copy.getInput();
	return (*this);
}

std::string		ScalarConverter::getInput() const
{
	return (this->_input);
}

ScalarConverter::operator float()
{
	return (static_cast<float>(_input));
}
std::ostream &operator<<(std::ostream &o, const ScalarConverter &copy)
{
	o << "char: " << char() << "\nint: " << int() << "\nfloat: " << float() << "\ndouble: " << double() << std::endl;
	return (o);
}
