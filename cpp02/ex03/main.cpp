/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 07:07:52 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/18 22:46:09 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include "Point.hpp"

void	print_bits(unsigned int raw, int i)
{
	if (i >= 32)
		return ;	
	print_bits(raw / 2, i + 1);
	std::cout << raw % 2;
	if (i == 8)
		std::cout << " ";
}



int	main(void)
{
	Point	p(Fixed(2.0f), Fixed(3.0f));
	Point	p2(Fixed(-1.0f), Fixed(0.0f));
	Point	p3(Fixed(2.0f), Fixed(-4.0f));
		
	bsp(p, p2, p3, Point(Fixed(2.0f), Fixed(3.5f)));
	return 0;
}
