/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:24:15 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/08 13:49:04 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 7
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
		std::cout << "numbers " << i << ": " << numbers[i] << std::endl;
        mirror[i] = value;
		std::cout << "mirror " << i << ": " << mirror[i] << std::endl;
    }
    //SCOPE
    {
		std::cout << std::endl;
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		for (int i = 0; i < MAX_VAL; i++)
		{
			std::cout << "tmp " << i << ": " << tmp[i] << std::endl;
			std::cout << "test " << i << ": " << test[i] << std::endl;
		}
		std::cout << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
    }
    delete [] mirror;//
    return 0;
}
