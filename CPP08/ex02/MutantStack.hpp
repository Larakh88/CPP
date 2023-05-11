/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:34:49 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/10 17:52:35 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template < typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {}
	
	MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}

	~MutantStack() {}
	
	MutantStack	&operator=(const MutantStack &copy) 
	{
		if(this != &copy)
			std::stack<T>::operator=(copy);
		return (*this);
	}
	
	typedef	typename std::stack<T>::container_type::iterator	iterator;
	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}
	
	iterator end()
	{
		return (std::stack<T>::c.end());
	}

};

#endif