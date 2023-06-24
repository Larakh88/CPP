/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:05:09 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/24 17:18:43 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const RPN &) { }

RPN	&RPN::operator=(const RPN &) { return (*this); }

RPN::RPN() { }

RPN::~RPN() { }

RPN::RPN(std::string operation) : _operation(operation) { }

void	RPN::execute()
{
	int		first;
	int		second;
	char	op[4] = {'+', '-', '*', '/'};
	int		flag;

	for (int i = 0; i < (int)_operation.length(); i++)
	{
		if (_operation[i] >= '0' && _operation[i] <= '9')
			_stack.push(_operation[i] - '0');
		else if (_operation[i] == ' ')
			continue ;
		else
		{
			if (_stack.size() < 2)
			{
				std::cout << "Error: Wrong nb of operations\n";
				return ;
			}
			second = _stack.top();
			_stack.pop();
			first = _stack.top();
			_stack.pop();
			for (int j = 0; j < 4; j++)
			{
				if (_operation[i] == op[j])
				{
					flag = j;
					break ;
				}
			}
			switch (flag)
			{
			case 0: // +
				_stack.push(first + second);
				break;
			case 1: // -
				_stack.push(first - second);
				break;
			case 2: // *
				_stack.push(first * second);
				break;
			case 3: // /
				if (second == 0)
				{
					std::cout << "Error: Impossible - Division by 0\n";
					return ;
				}
				_stack.push(first / second);
				break;
			}
		}
	}
	if (_stack.size() > 1)
	{
		std::cout << "Error: Wrong nb of operations\n";
		return ;
	}
	std::cout << _stack.top() << std::endl;
}