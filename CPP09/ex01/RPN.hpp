/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:04:12 by lel-khou          #+#    #+#             */
/*   Updated: 2023/06/24 16:34:34 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
private:
	std::stack<int>	_stack;
	std::string		_operation;
	
	RPN();
	RPN(const RPN &);
	RPN	&operator=(const RPN &);

public:
	RPN(std::string operation);
	~RPN();
	
	void	execute();
	
};

#endif