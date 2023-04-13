/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:17:42 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/13 19:23:56 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harlFilter;
	if (argc != 2)
	{
		std::cout << "Enter only 1 argument that is the log level you want to listen to." << std::endl;
		return (0);
	}
	harlFilter.complain(argv[1]);	
}
