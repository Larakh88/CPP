/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:01:15 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/24 14:22:12 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <fcntl.h>
#include <cstdlib>

#define RESET "\033[30m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
#define ERROR1() (PINK "Error: not a positive number. \n" RESET)
#define ERROR2(date) (PINK "Error: bad input => " + date + " \n" RESET)
#define ERROR3() (PINK "Error: too large a number. \n" RESET) 

int	error_check(std::string date, std::string value);

class BitcoinExchange {
private:
	BitcoinExchange ();
	BitcoinExchange (const BitcoinExchange &);
	BitcoinExchange	&operator=(const BitcoinExchange &);
	
	std::map<std::string, float>	_data;


public:
	BitcoinExchange(std::string data);
	~BitcoinExchange();
	
	void	printExchange(std::string date, std::string value);

};

#endif