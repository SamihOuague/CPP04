/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:49:09 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/12 04:14:11 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef FIXED_H
# define FIXED_H

class Fixed {
	private:
		int		rawBits;
		static const int	nbits = 8;
	public:	
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &t);
		~Fixed(void);	
		Fixed		&operator=(const Fixed&);
		bool		operator<(const Fixed&);	
		bool		operator>(const Fixed&);
		bool		operator>=(const Fixed&);
		bool		operator<=(const Fixed&);
		bool		operator!=(const Fixed&);	
		bool		operator==(const Fixed&);
		Fixed		operator+(const Fixed&);
		Fixed		operator-(const Fixed&);
		Fixed		operator*(const Fixed&);
		Fixed		operator/(const Fixed&);	
		Fixed		&operator++(void);
		Fixed		operator++(int);
		std::ostream	&operator<<(std::ostream& os);
		float	toFloat(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		int	getRawBits(void) const;
		static Fixed&	min(Fixed &a, Fixed &b);
		static const Fixed&	min(Fixed const &a, Fixed const &b);
		static Fixed&	max(Fixed &a, Fixed &b);	
		static const Fixed&	max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream& os, const Fixed &t);
#endif
