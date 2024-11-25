/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:40:52 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/23 02:32:17 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string.h>
#ifndef HUMAN_A_H
# define HUMAN_A_H

class	HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon;

	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void		setName(std::string name);
		void		setWeapon(Weapon weapon);
		Weapon		getWeapon(void) const;
		std::string	getName(void) const;
};
#endif
