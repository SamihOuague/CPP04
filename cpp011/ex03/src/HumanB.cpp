/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 01:02:09 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/02 02:15:07 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	(*this).setName(name);
	(*this)._weapon = NULL;
	return ;
}

void		HumanB::setName(std::string name)
{
	(*this)._name = name;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	(*this)._weapon = &weapon;
}

Weapon		HumanB::getWeapon(void) const
{
	if ((*this)._weapon == NULL)
		return (Weapon("no weapon"));
	return (*(*this)._weapon);
}

std::string	HumanB::getName(void) const
{
	return ((*this)._name);
}

void		HumanB::attack(void)
{
	std::cout << (*this).getName(); 
	std::cout << " attacks with their ";
	std::cout << (*this).getWeapon().getType() << std::endl;
}
