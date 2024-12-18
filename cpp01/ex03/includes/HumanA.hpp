/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:40:52 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/02 02:06:09 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string.h>
#ifndef HUMAN_A_H
# define HUMAN_A_H

class	HumanA {
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		void		setName(std::string name);
		void		setWeapon(Weapon &weapon);
		void		attack(void);
		Weapon		getWeapon(void) const;
		std::string	getName(void) const;
};
#endif
