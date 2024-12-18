/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:32:39 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/11 21:15:34 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(const int n)
{	
	std::cout << "Int constructor called" << std::endl;
	(*this).rawBits = n << (*this).nbits;
	return ;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	(*this).rawBits = (int)roundf(n * (1 << (*this).nbits));
	return ;
}

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	(*this).rawBits = 0;
	return ;
}

Fixed	&Fixed::operator = (const Fixed &t)
{	
	std::cout << "Copy assigement operator called" << std::endl;
	(*this).rawBits = t.getRawBits();
	return (*this);
}

std::ostream&	operator << (std::ostream &os, const Fixed &t)
{
	(void)t;
	os << t.toFloat();
	return (os);
}

Fixed::Fixed(const Fixed &t)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = t;
	return ;
}

float	Fixed::toFloat(void) const 
{
	return ((float)(*this).rawBits / (float)(1 << (*this).nbits));
}

int	Fixed::toInt(void) const 
{
	return ((*this).rawBits >> (*this).nbits);
}

int	Fixed::getRawBits(void) const
{
	return ((*this).rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	(*this).rawBits = raw;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
