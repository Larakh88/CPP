/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:32:41 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/25 19:44:45 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int argc, char **argv)
{
	try {
		PmergeMe	mergeSort(argc, argv);
	}
	catch (std::exception & e) {
		e.what();
	}
	return (0);
}