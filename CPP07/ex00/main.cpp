/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:54:56 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/07 14:45:29 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 6543;
	int b = 543;

	std::cout << "\033[0;32m" << "a = " << a << "\nb = " << b << "\033[0;37m" << std::endl;
	std::cout << "max = " << max<int>(a, b) << std::endl;
	std::cout << "min = " << min<int>(a, b) << std::endl;
	swap<int>(a, b);
	std::cout << "a = " << a << "\nb = " << b << std::endl << std::endl;
	
	float c = 6543.678f;
	float d = 543.68f;
	
	std::cout << "\033[0;32m" << "c = " << c << "\nd = " << d << "\033[0;37m" << std::endl;
	std::cout << "max = " << max<float>(c, d) << std::endl;
	std::cout << "min = " << min<float>(c, d) << std::endl;
	swap<float>(c, d);
	std::cout << "c = " << c << "\nd = " << d << std::endl << std::endl;
	
	double f = 3456.7;
	double e = 3456.6;
	
	std::cout << "\033[0;32m" << "f = " << f << "\ne = " << e << "\033[0;37m" << std::endl;
	std::cout << "max = " << max<double>(f, e) << std::endl;
	std::cout << "min = " << min<double>(f, e) << std::endl;
	swap<double>(f, e);
	std::cout << "f = " << f << "\ne = " << e << std::endl << std::endl;
	
	char x = 'a';
	char y = 'f';
	
	std::cout << "\033[0;32m" << "x = " << x << "\ny = " << y << "\033[0;37m" << std::endl;
	std::cout << "max = " << max<char>(x, y) << std::endl;
	std::cout << "min = " << min<char>(x, y) << std::endl;
	swap<char>(x, y);
	std::cout << "x = " << x << "\ny = " << y << std::endl << std::endl;
}