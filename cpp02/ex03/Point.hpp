/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:58:13 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/18 22:48:28 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#ifndef POINT_H
# define POINT_H

class	Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point(void);
		Point(const Fixed, const Fixed);
		Point(const Point &t);
		~Point(void);
		Point	&operator = (const Point&);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};
bool	bsp(const Point a, const Point b, const Point c, const Point point);
#endif
