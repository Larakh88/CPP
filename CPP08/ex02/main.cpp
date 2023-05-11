/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:34:52 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/11 09:46:58 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top of stack is: " << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << "after removing 1 item the size is: "<< mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	int i = 0;
	while (it != ite)
	{
		std::cout << "Item " << i << " of stack mstack is: " << *it << std::endl;
		++it;
		++i;
	}
	std::cout << std::endl;
	
	std::stack<int> s(mstack);
	
	MutantStack<int> s1(mstack);
	MutantStack<int>::iterator its = s1.begin();
	MutantStack<int>::iterator ites = s1.end();
	i = 0;
	while (its != ites)
	{
		std::cout << "Item " << i << " of stack s1 is: " << *its << std::endl;
		++its;
		++i;
	}
	return 0;
}

// int main()
// {
// 	std::list<int> mstack;
	
// 	mstack.push_back(5);
// 	mstack.push_back(17);
	
// 	std::cout << "top of stack is: " << mstack.back() << std::endl;
	
// 	std::list<int>::iterator itb = mstack.begin();
// 	itb++;

// 	mstack.erase(itb);
	
// 	std::cout << "after removing 1 item the size is: "<< mstack.size() << std::endl;
	
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
	
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
	
// 	++it;
// 	--it;
// 	int i = 0;
// 	while (it != ite)
// 	{
// 		std::cout << "Item " << i << " of stack is: " << *it << std::endl;
// 		++it;
// 		++i;
// 	}
// 	std::cout << std::endl;
// 	std::list<int> s(mstack);
	
// 	std::list<int>::iterator its = s.begin();
// 	std::list<int>::iterator ites = s.end();
// 	i = 0;
// 	while (its != ites)
// 	{
// 		std::cout << "Item " << i << " of stack s is: " << *its << std::endl;
// 		++its;
// 		++i;
// 	}
// 	return 0;
// }
