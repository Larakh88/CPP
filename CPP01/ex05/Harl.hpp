/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:39:34 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/13 18:34:27 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
private:
	void	debug (void);
	void	info (void);
	void	warning (void);
	void	error (void);
	std::string	(Harl::*level)(std::string);

public:
	Harl(void);
	~Harl(void);
	void	complain (std::string level);
};

#endif
