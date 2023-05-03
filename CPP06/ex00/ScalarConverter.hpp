/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:56:54 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/03 17:17:09 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <climits>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
private:
	std::string	_input;

	ScalarConverter();
	ScalarConverter(const ScalarConverter &);
	ScalarConverter	&operator=(const ScalarConverter &);

public:	
	~ScalarConverter();
	static void				convert(std::string input);
	static int				input_check(std::string str);
	static void				cas0(int i, std::string input);
	static void				cas1(double d, std::string input);
	static void				cas2(float _f, std::string input);
};	

#endif
