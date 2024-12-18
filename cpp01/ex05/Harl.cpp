/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 05:08:13 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/06 06:30:42 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I love having extra bacon for my";
       	std::cout << " 7XL-double-cheese-triple-pickle-special-ketchup";
       	std::cout << " burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra";
	std::cout << " bacon costs more money. You didn’t put";
	std::cout << " enough bacon in my burger! If you did,";
	std::cout << " I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra";
	std::cout << " bacon for free. I’ve been coming for";
	std::cout << " years whereas you started working here";
	std::cout << " since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!";
	std::cout << " I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*debugFn[4])(void) = {
		&Harl::debug,	
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string	levels[4] = {
		DEBUG,
		INFO,
		WARNING,
		ERROR,
	};
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
			((*this).*debugFn[i])();
	}
}
