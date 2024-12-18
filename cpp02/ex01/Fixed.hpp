/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:49:09 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/11 20:45:57 by souaguen         ###   ########.fr       */
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
		std::ostream	&operator<<(std::ostream& os);
		float	toFloat(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		int	getRawBits(void) const;
};

std::ostream	&operator<<(std::ostream& os, const Fixed &t);
#endif
