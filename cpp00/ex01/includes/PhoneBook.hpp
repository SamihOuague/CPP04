/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:13:21 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/22 04:36:55 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONE_BOOK_H
# define PHONE_BOOK_H
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int	counter;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchContact(void);
};
#endif
