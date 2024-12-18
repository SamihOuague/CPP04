/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:43:55 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/21 05:05:32 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "New zombie just appeared !" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << (*this).getName() << " died for real !" << std::endl;
	return ;
}

void		Zombie::setName(std::string name)
{
	(*this)._name = name;
	return ;
}

std::string	Zombie::getName(void)
{
	return ((*this)._name);
}

void		Zombie::announce(void)
{
	std::cout << (*this).getName();
       	std::cout << ": BraiiiiiiinnnzzzZ" << std::endl;
	return ;
}
