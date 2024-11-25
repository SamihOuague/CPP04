/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:18:10 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/22 04:38:44 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	//std::cout << "PhoneBook contructor." << std::endl;
	(*this).counter = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {	
	//std::cout << "PhoneBook destructor." << std::endl;
	return ;
}

void	PhoneBook::addContact(void) {
	std::cout << "======= New contact =======" << std::endl;
	(*this).contacts[(*this).counter % 8].setContact();
	(*this).counter += 1;
	return ;
}

void	PhoneBook::searchContact(void) {
	Contact		contact;
	std::string	index;
	int		i;

	std::cout << "====== Contact List ======" << std::endl;
	if ((*this).counter == 0)
	{
		std::cout << "          EMPTY        " << std::endl;
		return ;
	}
	i = -1;
	while (++i < (*this).counter && i < 8)
		(*this).contacts[i].getContact(i);
	std::cout << "Which user info do you want ? ";
	i = -1;
	while (i < 0)
	{
		while (index.empty())
		{
			getline(std::cin, index);
			if (std::cin.eof())
				return ;
			if (index.empty())
				std::cout << "Please type a valid index : ";
		}
		std::stringstream(index) >> i;
		if (i > 0 && i <= 8 && i <= (*this).counter)
			break ;
		std::cout << "Please type a valid index : ";
		i = -1;
		index = "";
	}
	contact = (*this).contacts[i - 1];
	std::cout << "Firstname : " << contact.getFirstName() << std::endl;
	std::cout << "Lastname  : " << contact.getLastName() << std::endl;
	std::cout << "Nickname  : " << contact.getNickName() << std::endl;
	std::cout << "Phone     : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Secret    : " << contact.getDarkSecret() << std::endl;
	return ;
}
