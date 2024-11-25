/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:11:05 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/18 02:39:47 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	phoneBook;
	Contact		contact;
	std::string	command;
	int		stop;
	

	stop = 0;
	while (stop == 0)
	{	
		std::cout << "Please enter a command : ";
		getline(std::cin, command);
		if (std::cin.eof())
			return (1);
		if (command.compare("ADD") == 0)
			phoneBook.addContact();
		else if (command.compare("SEARCH") == 0)
			phoneBook.searchContact();
		else if (command.compare("EXIT") == 0)
		{
			stop = 1;
			std::cout << "Exit phone book" << std::endl;
		}
		command = "";	
		std::cout << std::flush;
	}
	return (0);
}
