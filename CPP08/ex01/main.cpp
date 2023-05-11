/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:34 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/10 17:19:49 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main ()
{
	Span sp = Span(10005);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	try {
		std::vector<int> vec;
		std::ofstream	farr("Array");
		if (!farr.good())
		{
			std::cout << "Array file error" << std::endl;
			farr.close();
			return (0);
		}
		for (int i = 0; i < 10000; i++)
		{
			vec.push_back(std::rand() % 1000);
			farr << vec[i] << std::endl;
		}
		sp.addMulNumbers(vec.begin(), vec.end());
		
		std::ofstream	fvec("Vector");
		if (!fvec.good())
		{
			std::cout << "Vector file error" << std::endl;
			fvec.close();
			return (0);
		}
		for (int i = 5; i < 10005; i++)
			fvec << sp[i] << std::endl;
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	return (0);
}
