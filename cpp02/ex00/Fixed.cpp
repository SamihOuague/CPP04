/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:32:39 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/10 10:38:12 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	(*this).rawBits = 0;
	return ;
}

Fixed	&Fixed::operator = (Fixed &t)
{	
	std::cout << "Copy assigement operator called" << std::endl;
	(*this).rawBits = t.getRawBits();
	return (t);
}

Fixed::Fixed(Fixed &t)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = t;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ((*this).rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	(*this).rawBits = raw;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
