/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:12:06 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/02 17:16:45 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

int	input_check(char *str)
{
	int i;

	i = atoi(str);
	std::string s1 = static_cast<std::string>(str);
	std::string s;
	std::stringstream out;
	out << i;
	s = out.str();
	if (s == str) // int
		return (0);
	if (double_float(str) == 0 || s1 == "-inf" || s1 == "+inf" || s1 == "nan") //double
		return (1);
	else if (double_float(str) == 1 || s1 == "-inff" || s1 == "+inff" || s1 == "nanf") //float
		return (2);
	else
	{
		if ((s1.length() == 1 && isprint(s1[0]) != 0)) //char
			return (3);
	}
	return (4);
}

int main(int argc, char **argv)
{
	if (argc == 2 && input_check(argv[1]) != 4)
	{
		int	i = input_check(argv[1]);
		ScalarConverter		convert(argv[1], i);
		convert.convert();
	}
	else
		std::cout << "\033[1;31m" << "Please enter one parameter to be converted!\n" << "\033[0;37m";
}
