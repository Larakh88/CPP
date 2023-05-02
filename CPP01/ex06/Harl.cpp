/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:20:51 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/02 09:18:38 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}
	
void	Harl::debug (void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info (void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning (void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error (void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;	
}

void	Harl::complain (std::string level)
{
	void	(Harl::*ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levelarray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (level == levelarray[i])
			break;
	}
	switch (i)
	{
		case 0:
			(this->*ptr[i])();
			i++;
		case 1:
			(this->*ptr[i])();
			i++;
		case 2:
			(this->*ptr[i])();
			i++;
		case 3:
			(this->*ptr[i])();
			i++;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
