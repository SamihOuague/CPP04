/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:48:08 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/02 02:08:07 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"
#ifndef HUMAN_B_H
# define HUMAN_B_H

class	HumanB {
	private:
		std::string	_name;
		Weapon		*_weapon;
	
	public:
		HumanB(std::string name);
		void		setName(std::string name);
		void		setWeapon(Weapon &weapon);
		void		attack(void);
		Weapon		getWeapon(void) const;
		std::string	getName(void) const;
};
#endif
