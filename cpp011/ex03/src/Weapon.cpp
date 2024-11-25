/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 01:12:54 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/23 02:32:13 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void		Weapon::setType(std::string type)
{
	(*this)._type = type;
}

std::string	Weapon::getType(void) const
{
	return ((*this)._type);
}

Weapon::Weapon(std::string type)
{
	(*this).setType(type);
}
