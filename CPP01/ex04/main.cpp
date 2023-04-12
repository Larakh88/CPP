/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:28:33 by lel-khou          #+#    #+#             */
/*   Updated: 2023/04/12 15:44:23 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	getNewFile(std::string name)
{
	std::string	newName;
	
	newName += name;
	newName += ".replace";
	return (newName);
}

std::string	replace(char **argv, std::string text)
{
	
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	newFilename = getNewFile(argv[1]);;
		std::ofstream	newFile(newFilename);
		std::ifstream	myFile (argv[1]);
		std::string		line;
		std::string		text;
		
		if (!myFile.is_open())
		{
			std::cout << "File cannot be opened!" << std::endl;
			return (0);
		}
		while (myFile)
		{
			std::getline(myFile, line);
			if (!myFile.eof())
			{
				text += line;
				text += '\n';
			}		
		}
		text = replace(argv, text);
		newFile << text;
		newFile.close();
		myFile.close();
	}
	else
	{
		std::cout << "\033[31m" << "Please enter 3 arguments: filename (file to modify), ";
		std::cout << "s1 (string to be replaced), s2 (string to replace with)." << std::endl;
		std::cout << "Example: ./replace filename s1 s2" << "\033[30m" << std::endl; 
	}
}
