/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorCheck.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:39:20 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/24 11:35:12 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// if flag == 1, checking date
// if flag == 0, checking value
int	is_number(std::string str, int flag)
{
	int count = 0;
	if (str.empty() == 1)
		return (2);
	for(int i = 0; i < (int)str.length(); i++)
	{
		if (flag == 0)
		{
			if (str[0] == '-') // value is negative
				return (1);
			if (isdigit(str[i]) == 0 && str[i] != '.')
				return (2);
			if (str[i] == '.')
				count++;
		}
		else
		{
			if (isdigit(str[i]) == 0)
				return (1);
		}
	}
	if (count > 1)
		return (2);
	return (0);
}

int	date_checker(int year, int month, int day)
{
	int leapyear = false;
	int dayarray[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (year > 2022 || year < 2009 || month > 12 || month <= 0 || day > 31 || day <= 0)
		return (1);
	if ((year == 2009 && month == 01 && day == 01))
		return(1);
	if (year % 4 == 0)
	{
		if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0))
			leapyear = true;
	}
	if (leapyear == true)
		dayarray[1] = 29;
	for (int i = 0; i < 12; i++)
	{
		if (month == i + 1)
			if (day > dayarray[i])
				return (1);
	}
	return (0);
}

int	value_checker(std::string value)
{
	float	val;
	int		ret;
	
	ret = is_number(value, 0);
	if (ret != 0)
		return (ret);
	val = (float)(std::atof(value.c_str()));
	if (val > 1000 || val <= 0)
		return (3);
	return (0);
}

/* Will return 0 if no errors and 1,2,3 if there are errors */
int	error_check(std::string date, std::string value)
{
	std::string	year;
	std::string	month;
	std::string	day;
	size_t		pos;
	int 		count = 0;
	int			ret;

	ret = value_checker(value);
	if (ret != 0)
		return (ret);
	pos = date.find("-");
	if (pos == std::string::npos)
		return (2);
	while (pos != std::string::npos)
	{
		if (count == 0)
			year.append(date, 0, pos);
		else if (count == 1)
			month.append(date, 0, pos);
		date.erase(0, pos+1);
		if (count == 1)
		{
			pos = date.find("-");
			if (pos == std::string::npos)
				day.append(date, 0, date.length());
			else
				return (2);
		}
		pos = date.find("-");
		count++;
	}
	if (count > 2)
		return (2);
	if (is_number(year, 1) == 1 || is_number(month, 1) == 1 || is_number(day, 1) == 1)
		return (2);
	if (date_checker(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())) == 1)
		return (2);
	return (0);
}