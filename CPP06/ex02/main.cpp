/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:13:54 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/02 15:38:38 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>

Base *generate(void)
{
	int	i;
	Base *base;

	i = rand() % 3;
	std::cout << i << std::endl;
	switch (i)
	{
		case 0: //A
			base = new A;
			break;
		case 1: //B
			base = new B;
			break;
		case 2: //C
			base = new C;
			break;
	}
	return (base);
}

void identify(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "Type is A.\n";
		
	B	*b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "Type is B.\n";
		
	C	*c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "Type is C.\n";
}

void identify(Base& p)
{
	try {
	(void)dynamic_cast<A &>(p);
	std::cout << "Type is A.\n";
	}
	catch (std::exception &e){ }
	
	try {
	(void)dynamic_cast<B &>(p);
	std::cout << "Type is B.\n";
	}
	catch (std::exception &e){}
	
	try {
	(void)dynamic_cast<C &>(p);
	std::cout << "Type is C.\n";
	}
	catch (std::exception &e){}
}

int main()
{
	Base	*b;
	
	b = generate();
	identify(b);
	identify (*b);
	delete b;
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify (*b);
	delete b;
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify (*b);
	delete b;
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify (*b);
	delete b;
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify (*b);
	delete b;
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify (*b);
	delete b;
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify (*b);
	delete b;
}
