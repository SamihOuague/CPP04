/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 05:22:58 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/05 06:25:20 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	fileIn;
	std::ofstream	fileOut;
	std::string	line;
	std::string	needle;
	std::string	replace;
	std::string	filename;
	std::string	rfilename;
	std::string::size_type	found;

	if (argc != 4)
	{
		std::cout << "Usage : $>./sed <filename> <needle> <replace>";
		std::cout << std::endl;
		return (1);
	}
	filename = argv[1];
	rfilename = filename + ".replace";
	needle = argv[2];
	replace = argv[3];
	fileIn.open(filename.c_str());
	fileOut.open(rfilename.c_str());
	if (!fileIn.is_open() || !fileIn.is_open())
	{
		std::cout << "File error !" << std::endl;
		fileIn.close();
		fileOut.close();
		return (2);
	}
	while (std::getline(fileIn, line))
	{
		found = line.find(needle);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				fileOut << line.substr(0, found);
				fileOut << replace;
				line = line.substr(found + needle.length());
				found = line.find(needle);
			}
			fileOut << line;
			fileOut << std::endl;
		}
		else
			fileOut << line << std::endl;
	}
	fileOut.close();
	fileIn.close();
	return (0);
}
