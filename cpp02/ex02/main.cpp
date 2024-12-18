/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 07:07:52 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/12 04:17:45 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

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
	Fixed a(0);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;	
	std::cout << a << std::endl;	
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;	
	std::cout << Fixed::max( a, b ) << std::endl;	
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( Fixed(1.2f), Fixed(1.3f) ) << std::endl;	
	std::cout << Fixed::min( Fixed(1.2f), Fixed(1.3f) ) << std::endl;
	return 0;
}
