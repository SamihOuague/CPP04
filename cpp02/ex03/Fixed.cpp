/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:32:39 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/12 04:14:03 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(const int n)
{	
//	std::cout << "Int constructor called" << std::endl;
	(*this).rawBits = n << (*this).nbits;
	return ;
}

Fixed::Fixed(const float n)
{
//	std::cout << "Float constructor called" << std::endl;
	(*this).rawBits = (int)roundf(n * (1 << (*this).nbits));
	return ;
}

Fixed::Fixed(void)
{
//	std::cout << "Default constructor called" << std::endl;
	(*this).rawBits = 0;
	return ;
}

Fixed	&Fixed::operator = (const Fixed &t)
{	
//	std::cout << "Copy assigement operator called" << std::endl;
	(*this).rawBits = t.getRawBits();
	return (*this);
}

std::ostream&	operator << (std::ostream &os, const Fixed &t)
{
	os << t.toFloat();
	return (os);
}

bool		Fixed::operator == (const Fixed &t)
{
	return ((*this).toFloat() == t.toFloat());
}

bool		Fixed::operator != (const Fixed &t)
{
	return ((*this).toFloat() != t.toFloat());
}

bool		Fixed::operator <= (const Fixed &t)
{
	return ((*this).toFloat() <= t.toFloat());
}

bool		Fixed::operator >= (const Fixed &t)
{
	return ((*this).toFloat() >= t.toFloat());
}

bool		Fixed::operator < (const Fixed &t)
{
	return ((*this).toFloat() < t.toFloat());
}

bool		Fixed::operator > (const Fixed &t)
{
	return ((*this).toFloat() > t.toFloat());
}

Fixed		&Fixed::operator ++ (void)
{
	(*this).rawBits++;
	return (*this);
}

Fixed		Fixed::operator ++ (int i)
{
	(void) i;
	Fixed	old = *this;
	operator++();
	return (old);
}

Fixed		Fixed::operator * (const Fixed &t)
{
	Fixed	tmp;
	float	res;
	
	res = (*this).toFloat() * t.toFloat();
	tmp.setRawBits((int)roundf(res * (1 << (*this).nbits)));
	return (tmp);
}

Fixed		Fixed::operator / (const Fixed &t)
{
	Fixed	tmp;
	float	res;
	
	res = (*this).toFloat() / t.toFloat();
	tmp.setRawBits((int)roundf(res * (1 << (*this).nbits)));
	return (tmp);
}

Fixed		Fixed::operator + (const Fixed &t)
{
	Fixed	tmp;
	float	res;
	
	res = (*this).toFloat() + t.toFloat();
	tmp.setRawBits((int)roundf(res * (1 << (*this).nbits)));
	return (tmp);
}

Fixed		Fixed::operator - (const Fixed &t)
{
	Fixed	tmp;
	float	res;
	
	res = (*this).toFloat() - t.toFloat();
	tmp.setRawBits((int)roundf(res * (1 << (*this).nbits)));
	return (tmp);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	return (a);
}
Fixed::Fixed(const Fixed &t)
{
	//std::cout << "Copy constructor called" << std::endl;
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
	//std::cout << "Destructor called" << std::endl;
	return ;
}
