/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 23:28:33 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/09 10:30:25 by lel-khou         ###   ########.fr       */
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
	std::string	after;
	std::string	before;
	std::size_t	found;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	found = text.find(s1);
	while (found < text.length())
	{
		if (found < text.length())
		{
			after = text.substr(found + s1.length(), text.length());
			before = text.substr(0, found);
			before.append(s2);
			before.append(after);
			text = before;
	 	}
		found = text.find(s1, found + s2.length());
	}
	return (text);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	newFilename = getNewFile(argv[1]);
		std::ofstream	newFile;
		std::ifstream	myFile (argv[1]);
		std::string		line;
		std::string		text;
		
		if (!myFile.good())
		{
			std::cout << "File Error!" << std::endl;
			myFile.close();
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
		newFile.open(newFilename);
		if (!newFile.good())
		{
			std::cout << "File Error!" << std::endl;
			newFile.close();
			myFile.close();
			return (0);
		}
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
