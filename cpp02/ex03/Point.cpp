/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:02:42 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/13 18:31:51 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point(void) : x(0), y(0)
{
	std::cout << "Default Point constructor called" << std::endl;
	return ;
}

Point::Point(const Fixed a, const Fixed b): x(a), y(b)
{
	std::cout << "Assignment Point constructor called" << std::endl;
	return ;
}

Point::Point(const Point &t): x(t.x), y(t.y) 
{
	std::cout << "Copy Point constructor called" << std::endl;
	*this = t;
	return ;
}

Point::~Point(void)
{
	std::cout << "Point destructor called." << std::endl;
	return ;
}

Fixed	Point::getX(void) const
{
	return ((*this).x);
}

Fixed	Point::getY(void) const
{
	return ((*this).y);
}

Point	&Point::operator = (const Point &t)
{
	(void)t;
	return (*this);
}
