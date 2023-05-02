/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:56:54 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/02 16:22:34 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cmath>

class ScalarConverter {
private:
	std::string	_input;
	int			_type;
	char		_c;
	int			_i;
	float		_f;
	double		_d;

public:	
	ScalarConverter(std::string input, int i);
	ScalarConverter(const ScalarConverter &copy);
	~ScalarConverter();
	
	ScalarConverter	&operator=(const ScalarConverter &copy);
	std::string		getInput() const;
	int				getType() const;
	void			convert();
	char			getC() const;
	int				getI() const;
	float			getF() const;
	double			getD() const;
};

#endif
