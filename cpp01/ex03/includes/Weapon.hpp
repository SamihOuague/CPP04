/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 23:37:50 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/02 01:15:11 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef WEAPON_H
# define WEAPON_H

class Weapon {
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		Weapon(void);
		std::string	getType(void) const;
		void		setType(std::string type);
};
#endif
