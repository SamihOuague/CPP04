/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:46:15 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/18 22:47:41 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	absolute(Fixed value)
{
	if (value < 0)
		return (Fixed(-1.0f) * value);
	return (value);
}

Fixed	get_area(const Point a, const Point b, const Point c)
{
	Fixed	i(a.getX() * (b.getY() - c.getY()));
	Fixed	j(b.getX() * (c.getY() - a.getY()));
	Fixed	k(c.getX() * (a.getY() - b.getY()));
	Fixed	result(absolute(i + j + k) * 0.5f);
	
	return (result);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	const Fixed	total(get_area(a, b, c));
	Fixed	abx(get_area(a, b, point));	
	Fixed	acx(get_area(c, a, point));
	Fixed	bcx(get_area(b, c, point));
	Fixed	result((abx + acx + bcx));

	return (total.toFloat() != result.toFloat());
}
