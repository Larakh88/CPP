/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 09:52:02 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/24 11:37:43 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange () { }

BitcoinExchange::BitcoinExchange (const BitcoinExchange &) { }

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &) { return (*this); }

BitcoinExchange::BitcoinExchange(std::string data)
{
	std::ifstream	dataFile(data.c_str	());
	std::string		line;
	int 			i = 0;
	int				pos;
	std::string		date;
	std::string		val;
	float			rate;
	
	while (!dataFile.eof() && dataFile.good())
	{
		std::getline(dataFile, line);
		if (i != 0 && !line.empty())
		{
			pos = line.find(',');
			date.append(line, 0, pos);
			val.append(line, pos + 1, line.length() - pos);
			rate = (float)(std::atof(val.c_str()));
			this->_data.insert(std::make_pair(date, rate));
			date.clear();
			val.clear();
		}
		i++;
	}
	dataFile.close();
}

BitcoinExchange::~BitcoinExchange() { }

void	BitcoinExchange::printExchange(std::string date, std::string value)
{
	float	rate;
	float	res;
	
	std::map<std::string, float>::iterator	it;
	
	it = this->_data.find(date);
	if (it != this->_data.end())
		rate = it->second;
	else
	{
		it = this->_data.upper_bound(date);
		it--;
		rate = it->second;
	}
	res = (float)(std::atof(value.c_str())) * rate;
	std::cout << date << " => " << value << " = " << res << std::endl;
}