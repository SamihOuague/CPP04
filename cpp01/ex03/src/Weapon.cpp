/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 01:12:54 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/02 01:19:49 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	(*this).setType(type);
}

Weapon::Weapon(void)
{
	(*this).setType("");
}

void		Weapon::setType(std::string type)
{
	(*this)._type = type;
}

std::string	Weapon::getType(void) const
{
	return ((*this)._type);
}
