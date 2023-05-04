/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:56:56 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/04 10:00:25 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &)
{
	return (*this);
}

void			ScalarConverter::convert(std::string input)
{
	int	type = input_check(input);
	char		_c;
	int			_i;
	float		_f;
	double		_d;
	
	switch(type)
	{
		case 0:
			_i = atoi((input).c_str());
			cas0(_i, input);
			break;
			
		case 1:
			_d = atof((input).c_str());
			cas1(_d, input);
			break;
			
		case 2:
			_f = static_cast<float>(atof((input).c_str()));
			cas2(_f, input);
			break;
			
		case 3:
			_c = input[0];
			std::cout << "char: '" << _c << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(_c) << std::endl;
			if (input.length() <= 6)
			{
				std::cout << "float: " << static_cast<float>(_c) << ".0f" << std::endl;
				std::cout << "double: " << static_cast<double>(_c) << ".0" << std::endl;
			}
			else
			{
				std::cout << "float: " << static_cast<float>(_c) << "f" << std::endl;
				std::cout << "double: " << static_cast<double>(_c) << std::endl;
			}
			break;
		case 4:
			std::cout << "\033[1;31m" << "Please enter one parameter to be converted!\n" << "\033[0;37m";
			break;
	}
}

void	ScalarConverter::cas0(int _i, std::string input)
{
	double d = atof((input).c_str());
	if (_i < 0 || _i > 126)
	std::cout << "char: Impossible\n";
	else if ((_i != 10 && _i != 9) && _i < 32)
		std::cout << "char: Non Displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(_i) << "'" << std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int: overflow\n";
	else
		std::cout << "int: " << _i << std::endl;
	if (input.length() <= 6)
	{
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void	ScalarConverter::cas1(double _d, std::string input)
{
	if (_d < 0 || _d > 126 || input =="nan" || input == "-inf" || input == "+inf")
		std::cout << "char: Impossible\n";
	else if ((_d != 10 && _d != 9) && _d < 32)
		std::cout << "char: Non Displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(_d) << "'" << std::endl;
	if (input == "+inf" || input == "nan" || input == "-inf")
		std::cout << "int: Impossible\n";
	else if (_d > INT_MAX || _d < INT_MIN)
		std::cout << "int: overflow\n";
	else
		std::cout << "int: " << static_cast<int>(_d) << std::endl;
	if (input.length() <= 6)
	{
		if (input == "+inf")
		{
			std::cout << "float: " << INFINITY << "f" << std::endl;
			std::cout << "double: " << INFINITY << std::endl;
		}
		else if (input == "-inf")
		{
			std::cout << "float: " << -INFINITY << "f" << std::endl;
			std::cout << "double: " << -INFINITY << std::endl;
		}
		else if (input == "nan")
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else
		{
			std::cout << "float: " << static_cast<float>(_d) << ".0f" << std::endl;
			std::cout << "double: " << _d << ".0" << std::endl;
		}
	}
	else
	{
		std::cout << "float: " << static_cast<float>(_d) << "f" << std::endl;
		std::cout << "double: " << _d << std::endl;
	}
}

void	ScalarConverter::cas2(float _f, std::string input)
{
	if (_f < 0 || _f > 126 || input =="nan" || input == "-inf" || input == "+inf")
		std::cout << "char: Impossible\n";
	else if ((_f != 10 && _f != 9) && _f < 32)
		std::cout << "char: Non Displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(_f) << "'" << std::endl;
	if (input == "+inff" || input == "nan" || input == "-inff")
		std::cout << "int: Impossible\n";
	else if (_f > INT_MAX || _f < INT_MIN)
		std::cout << "int: overflow\n";
	else
		std::cout << "int: " << static_cast<int>(_f) << std::endl;
	if (input.length() <= 6)
	{
		if (input == "+inff")
		{
			std::cout << "float: " << INFINITY << "f" << std::endl;
			std::cout << "double: " << INFINITY << std::endl;
		}
		else if (input == "-inff")
		{
			std::cout << "float: " << -INFINITY << "f" << std::endl;
			std::cout << "double: " << -INFINITY << std::endl;
		}
		else if (input == "nanf")
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		else
		{
			std::cout << "float: " << _f << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(_f) << ".0" << std::endl;
		}
	}
	else
	{
		std::cout << "float: " << _f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(_f) << std::endl;
	}
}

int	double_float(std::string str)
{
	int	i;
	int	j;
	int len;
	
	i = 0;
	j = 0;
	len = str.length();
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (i < len)
	{
		if (str[i] == '.')
			j++;
		if (isdigit(str[i]) == 0 && str[i] != '.')
		{
			if (str[i] == 'f' && i == len - 1)
			{
				i++;
				continue;
			}
			return (2);
		}
		i++;
	}
	if (j == 1 && i == len && str[i - 1] == 'f')
		return (1);
	if (j == 1 && i == len)
		return (0);
	return (2);
}

int		ScalarConverter::input_check(std::string str)
{
	int	i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while(i < (int)str.length())
	{
		if (isdigit(str[i]) == 0)
			break;
		i++;
	}
	if (i == (int)str.length() && i != 1)
		return (0);
	if (double_float(str) == 0 || str == "-inf" || str == "+inf" || str == "nan") //double
		return (1);
	else if (double_float(str) == 1 || str == "-inff" || str == "+inff" || str == "nanf") //float
		return (2);
	else
	{
		if ((str.length() == 1 && isprint(str[0]) != 0)) //char
			return (3);
	}
	return (4);
}

