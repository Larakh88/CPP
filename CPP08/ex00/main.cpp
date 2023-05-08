/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:42:56 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/08 13:28:52 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
	
int main()
{
	std::vector<int>					vec;
	std::vector<int>::const_iterator	vit;
	
	std::list<int>					lst;
	std::list<int>::const_iterator	lit;
	
	for (int i = 0; i < 10; i++)
		vec.push_back(i + 2);
	for (vit = vec.begin(); vit != vec.end(); ++vit)
		std::cout << *vit << ", ";
	std::cout << std::endl;
	::easyfind< std::vector<int> >(vec, 102);
	::easyfind< std::vector<int> >(vec, 7);
	
	for (int i = 1; i < 10; i++)
		lst.push_back(i * 10);
	for (lit = lst.begin(); lit != lst.end(); ++lit)
		std::cout << *lit << ", ";
	std::cout << std::endl;
	::easyfind< std::list<int> >(lst, 90);
	::easyfind< std::list<int> >(lst, -90);
}
