/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:50:47 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/02 02:07:19 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
{
	(*this).setWeapon(weapon);
	(*this).setName(name);
}

void		HumanA::setName(std::string name)
{
	(*this)._name = name;
}

void		HumanA::setWeapon(Weapon &weapon)
{
	(*this)._weapon = &weapon;
}

Weapon		HumanA::getWeapon(void) const
{
	return (*(*this)._weapon);
}

std::string	HumanA::getName(void) const
{
	return ((*this)._name);
}

void		HumanA::attack(void)
{
	std::cout << (*this).getName(); 
	std::cout << " attacks with their ";
	std::cout << (*this).getWeapon().getType() << std::endl;
}
