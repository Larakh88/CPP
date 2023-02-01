/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:19:52 by lel-khou          #+#    #+#             */
/*   Updated: 2023/02/01 20:15:51 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				std::cout << (char) toupper(argv[j][i]);
				i++;
			}
			j++;
		}
	}
	std::cout << std::endl;

	return (0);	
}