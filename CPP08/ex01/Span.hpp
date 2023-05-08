/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:45:32 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/08 14:04:08 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>

class	Span {
private:
	unsigned int	_N;
	int				*_arr;

public:	
	Span(unsigned int n);
	Span(const Span &copy);
	~Span(void);
	
	Span	&operator=(const Span &copy);
	
	void	addNumber(int nbr);
	
	int		shortestSpan();
	
	int		shortestSpan();
	
	class	Error : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

#endif
