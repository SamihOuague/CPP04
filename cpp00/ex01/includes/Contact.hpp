/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:38:22 by souaguen          #+#    #+#             */
/*   Updated: 2024/11/22 04:27:07 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <string>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkSecret;
	public:
		Contact(void);
		~Contact(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkSecret(void);
		void		setContact(void);
		void		getContact(int index);
		
};
#endif
