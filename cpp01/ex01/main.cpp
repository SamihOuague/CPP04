/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:58:14 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/21 23:54:26 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombiePtr;

	zombiePtr = zombieHorde(10, "bruh");
	for (int i = 0; i < 10; i++)
		(*(zombiePtr + i)).announce();
	delete[] zombiePtr;
	return (0);
}
