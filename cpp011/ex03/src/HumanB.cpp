/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 01:02:09 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/23 01:11:43 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	(*this).setName(name);
	return ;
}

void		HumanB::setName(std::string name)
{
	(*this)._name = name;
}

void		HumanB::setWeapon(Weapon weapon)
{
	(*this)._weapon = weapon;
}

Weapon		HumanB::getWeapon(void)
{
	return ((*this)._weapon);
}

std::string	HumanB::getName(void)
{
	return ((*this)._name);
}
