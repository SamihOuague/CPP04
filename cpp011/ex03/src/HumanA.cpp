/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:50:47 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/23 02:31:22 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void		HumanA::setName(std::string name)
{
	(*this)._name = name;
}

void		HumanA::setWeapon(Weapon weapon)
{
	(*this)._weapon = weapon;
}

Weapon		HumanA::getWeapon(void) const
{
	return ((*this)._weapon);
}

std::string	HumanA::getName(void) const
{
	return ((*this)._name);
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	(*this).setName(name);
	(*this).setWeapon(weapon);
}
