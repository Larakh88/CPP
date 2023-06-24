/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:00:35 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/24 14:43:23 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string	removeSpace(std::string str, int flag)
{
	int i;
	if (flag == 0) //date
	{
		i = 0;
		for (;i < (int)str.length(); i++)
			if (isspace(str[i]) == 0) // if not a space
				break;
		if (i != 0)
			str.erase(0, i);
	}
	else
	{
		i = str.length() - 1;
		for(; i > 0; i--)
			if (isspace(str[i]) == 0) // if not a space
				break;
		if (i < (int)str.length() - 1)
			str.erase(str.begin() + i + 1, str.end());			
	}
	return (str);
}

void	loop(std::string line)
{
	std::string	date;
	std::string	value;
	size_t		pos;

	pos = line.find("|");
	if (pos != std::string::npos)
	{
		date.append(line, 0, pos - 1);
		date = removeSpace(date, 0);
		if (pos < line.length() - 1)
			value.append(line, pos + 2, line.length() - pos - 2);
		else
		{
			std::cout << ERROR2(line);
			return ;
		}
		value = removeSpace(value, 1);
		int ret = error_check(date, value);
		switch (ret)
		{
			case 1:
				std::cout << ERROR1();
				break;
			case 2:
				std::cout << ERROR2(line);
				break;
			
			case 3:
				std::cout << ERROR3();
				break;
				
			default:
				BitcoinExchange btc("data.csv");
				btc.printExchange(date, value);
				break;
		}
	}
	else
		std::cout << ERROR2(line);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		std::ifstream	inputFile (argv[1]);
		std::string		line;
		int				i = 0;
		
		/*Check is checking for directory is required or no*/
		if (!inputFile.good() || open(argv[1], O_DIRECTORY) != -1)
		{
			std::cout << PINK "Error: could not open file.\n" RESET;
			inputFile.close();
			return (1);
		}
		while (!inputFile.eof())
		{
			std::getline(inputFile, line);
			if (i != 0)
				loop(line);
			i++;
		}
		inputFile.close();
	}
	else
		std::cout << "Error: could not open file.\n";
}