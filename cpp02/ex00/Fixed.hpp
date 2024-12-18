/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <souaguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 06:49:09 by  souaguen         #+#    #+#             */
/*   Updated: 2024/12/10 10:23:52 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {
	private:
		int		rawBits;
		static const int	nbits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &t);
		~Fixed(void);
		Fixed	&operator=(Fixed&);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif
