/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:48:08 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/23 02:17:22 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"
#ifndef HUMAN_B_H
# define HUMAN_B_H

class	HumanB
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void		setName(std::string name);
		void		setWeapon(Weapon weapon);
		Weapon		getWeapon(void) const;
		std::string	getName(void) const;
};
#endif
