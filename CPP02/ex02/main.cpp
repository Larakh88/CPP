/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:22:46 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/18 10:12:10 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	// Fixed c (123.98f);
	// Fixed d (123);

	Fixed c (10);
	Fixed d (-4);

	// Fixed c (543);
	// Fixed d (543);

	std::cout << "\n\033[31m" << "Comparison: c = ";
	std::cout << c << ", d = " << d << "\033[30m\n";
	if (c < d)
		std::cout << "c is strictly less than d\n";
	if (c > d)
		std::cout << "c is strictly greater than d\n";
	if (c == d)
		std::cout << "c is equal to d\n";
	if (c <= d)
		std::cout << "c is less than or equal to d\n";
	if (c >= d)
		std::cout << "c is greater than or equal to d\n";
	if (c != d)
		std::cout << "c is different than d\n";

	std::cout << "\n\033[31m" << "Arithmetic c = ";
	std::cout << c << ", d = " << d << "\033[30m\n";
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	
	std::cout << "\n\033[31m" << "Increment/decrement a = ";
	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << ", b = " << b << "\033[30m\n";
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max between a and b is " << Fixed::max( a, b ) << std::endl;
	std::cout << "min between a and b is " << Fixed::min( a, b ) << std::endl;
	return 0;
}
