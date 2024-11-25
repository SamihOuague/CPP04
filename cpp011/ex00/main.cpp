/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:58:14 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/21 23:28:17 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie;
	Zombie	*zombiePtr;

	zombie.setName("Foo");
	zombie.announce();

	randomChump("Bar");

	zombiePtr = newZombie("Bruh");
	if (zombiePtr == NULL)
		return (1);
	(*zombiePtr).announce();
	delete zombiePtr;
	return (0);
}
