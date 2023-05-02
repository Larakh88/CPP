/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:56:56 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/02 17:16:44 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string input, int i) : _input(input), _type(i) {}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : _input(copy.getInput()), _type(copy.getType()) {}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor Called.\n";
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
	{
		this->_input = copy.getInput();
		this->_type = copy.getType();
	}
	return (*this);
}

std::string		ScalarConverter::getInput() const
{
	return (this->_input);
}

int				ScalarConverter::getType() const
{
	return (this->_type);
}

char			ScalarConverter::getC() const
{
	return (this->_c);
}

int				ScalarConverter::getI() const
{
	return (this->_i);
}

float			ScalarConverter::getF() const
{
	return (this->_f);
}

double			ScalarConverter::getD() const
{
	return (this->_d);
}

void			ScalarConverter::convert()
{
	switch(this->_type)
	{
		case 0:
			this->_i = atoi((this->_input).c_str());
			this->_d = static_cast<double>(this->_i);
			this->_f = static_cast<float>(this->_i);
			this->_c = static_cast<char>(this->_i);
			if (this->_i < 0 || this->_i > 126)
				std::cout << "char: Impossible\n";
			else if ((this->_i != 10 && this->_i != 9) && this->_i < 32)
				std::cout << "char: Non Displayable\n";
			else
				std::cout << "char: '" << this->_c << "'" << std::endl;
			std::cout << "int: " << this->_i << std::endl;
			if (this->_input.length() <= 6)
			{
				std::cout << "float: " << this->_f << ".0f" << std::endl;
				std::cout << "double: " << this->_d << ".0" << std::endl;
			}
			else
			{
				std::cout << "float: " << this->_f << "f" << std::endl;
				std::cout << "double: " << this->_d << std::endl;
			}
			break;
			
		case 1:
			this->_d = atof((this->_input).c_str());
			this->_i = static_cast<int>(this->_d);
			this->_f = static_cast<float>(this->_d);
			this->_c = static_cast<char>(this->_d);
			if (this->_i < 0 || this->_i > 126)
				std::cout << "char: Impossible\n";
			else if ((this->_i != 10 && this->_i != 9) && this->_i < 32)
				std::cout << "char: Non Displayable\n";
			else
				std::cout << "char: '" << this->_c << "'" << std::endl;
			if (this->_input == "+inf" || this->_input == "nan" || this->_input == "-inf")
				std::cout << "int: Impossible\n";
			else
				std::cout << "int: " << this->_i << std::endl;
			if (this->_input.length() <= 6)
			{
				if (this->_input == "+inf")
				{
					std::cout << "float: " << INFINITY << "f" << std::endl;
					std::cout << "double: " << INFINITY << std::endl;
				}
				else if (this->_input == "-inf")
				{
					std::cout << "float: " << -INFINITY << "f" << std::endl;
					std::cout << "double: " << -INFINITY << std::endl;
				}
				else if (this->_input == "nan")
				{
					std::cout << "float: nanf" << std::endl;
					std::cout << "double: nan" << std::endl;
				}
				else
				{
					std::cout << "float: " << this->_f << ".0f" << std::endl;
					std::cout << "double: " << this->_d << ".0" << std::endl;
				}
			}
			else
			{
				std::cout << "float: " << this->_f << "f" << std::endl;
				std::cout << "double: " << this->_d << std::endl;
			}
			break;
			
		case 2:
			this->_f = static_cast<float>(atof((this->_input).c_str()));
			this->_i = static_cast<int>(this->_f);
			this->_d = static_cast<double>(this->_f);
			this->_c = static_cast<char>(this->_f);
			if (this->_i < 0 || this->_i > 126)
				std::cout << "char: Impossible\n";
			else if ((this->_i != 10 && this->_i != 9) && this->_i < 32)
				std::cout << "char: Non Displayable\n";
			else
				std::cout << "char: '" << this->_c << "'" << std::endl;
			if (this->_input == "+inff" || this->_input == "nan" || this->_input == "-inff")
				std::cout << "int: Impossible\n";
			else
				std::cout << "int: " << this->_i << std::endl;
			if (this->_input.length() <= 6)
			{
				if (this->_input == "+inff")
				{
					std::cout << "float: " << INFINITY << "f" << std::endl;
					std::cout << "double: " << INFINITY << std::endl;
				}
				else if (this->_input == "-inff")
				{
					std::cout << "float: " << -INFINITY << "f" << std::endl;
					std::cout << "double: " << -INFINITY << std::endl;
				}
				else if (this->_input == "nanf")
				{
					std::cout << "float: nanf" << std::endl;
					std::cout << "double: nan" << std::endl;
				}
				else
				{
					std::cout << "float: " << this->_f << ".0f" << std::endl;
					std::cout << "double: " << this->_d << ".0" << std::endl;
				}
			}
			else
			{
				std::cout << "float: " << this->_f << "f" << std::endl;
				std::cout << "double: " << this->_d << std::endl;
			}
			break;
			
		case 3:
			this->_c = this->_input[0];
			this->_i = static_cast<int>(this->_c);
			this->_d = static_cast<double>(this->_c);
			this->_f = static_cast<float>(this->_c);
			std::cout << "char: '" << this->_c << "'" << std::endl;
			std::cout << "int: " << this->_i << std::endl;
			if (this->_input.length() <= 6)
			{
				std::cout << "float: " << this->_f << ".0f" << std::endl;
				std::cout << "double: " << this->_d << ".0" << std::endl;
			}
			else
			{
				std::cout << "float: " << this->_f << "f" << std::endl;
				std::cout << "double: " << this->_d << std::endl;
			}
			break;
	}
}

