/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:50:45 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/22 04:46:37 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	//std::cout << "Contact constructor." << std::endl;
	return ;
}

Contact::~Contact(void) {
	//std::cout << "Contact destructor." << std::endl;
	return ;
}

bool	isWhiteSpace(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= 8 && str[i] <= 32))
			return (false);
	}
	return (true);
}

void	setAttr(std::string label, std::string *ptr)
{
	(*ptr).clear();
	while ((*ptr).empty())
	{
		std::cout << label;
		getline(std::cin, *ptr);
		if (std::cin.eof())
			return ;
		if (isWhiteSpace(*ptr))
			(*ptr).clear();
	}
}

void	Contact::setContact(void)
{
	setAttr("Firstname   : ", &(*this)._firstName);	
	setAttr("Lastname    : ", &(*this)._lastName);
	setAttr("Nickname    : ", &(*this)._nickName);
	setAttr("Phone       : ", &(*this)._phoneNumber);	
	setAttr("Dark secret : ", &(*this)._darkSecret);
	std::cout << "Adding " << (*this)._firstName;
       	std::cout << " " << (*this)._lastName << " (";
	std::cout << (*this)._nickName << ") in contact !" << std::endl;
	return ;
}

std::string	infoColumn(std::string str)
{
	std::string	newStr;
	
	newStr = str;
	if (str.length() <= 10)
	{
		newStr.resize(10, ' ');
		return (newStr);
	}
	newStr.resize(9);
	newStr.resize(10, '.');
	return (newStr);
}

std::string	Contact::getFirstName(void)
{
	return (*this)._firstName;
}

std::string	Contact::getLastName(void)
{
	return (*this)._lastName;
}

std::string	Contact::getNickName(void)
{
	return (*this)._nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return (*this)._phoneNumber;
}

std::string	Contact::getDarkSecret(void)
{
	return (*this)._darkSecret;
}

void	Contact::getContact(int index)
{
	char	cindex;

	cindex = '0' + index + 1;
	std::cout << "| " << cindex << "         ";
	std::cout << " | " << infoColumn((*this)._firstName);
	std::cout << " | " << infoColumn((*this)._lastName); 
	std::cout << " | " << infoColumn((*this)._nickName);
	std::cout << " |" << std::endl;
	return ;
}
