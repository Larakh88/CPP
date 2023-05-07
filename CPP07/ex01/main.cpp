/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:35:28 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/05 16:28:31 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int			intarr[4] = {1, 2, 3, 4};
	float		floatarr[4] = {1.1f, 2.2f, 3.3f, 4.4f};
	double		doublearr[4] = {1.45, 2.65, 3.06, 4};
	std::string	strarr[4] = {"Hi", "How", "are", "you"};

	::iter<int>(intarr, 4, f<int>);
	std::cout << std::endl << std::endl;
	
	::iter<float>(floatarr, 4, f<float>);
	std::cout << std::endl << std::endl;
	
	::iter<double>(doublearr, 4, f<double>);
	std::cout << std::endl << std::endl;
	
	::iter<std::string>(strarr, 4, f<std::string>);
	std::cout << std::endl;
}