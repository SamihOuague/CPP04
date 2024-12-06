/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaguen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:33:44 by souaguen          #+#    #+#             */
/*   Updated: 2024/12/06 07:22:24 by souaguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_upper_str(std::string msg)
{
	for (int i = 0; msg[i]; i++)
		std::cout << (char) toupper(msg[i]);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		ft_upper_str(argv[i]);
	std::cout << std::endl;
	return (1);
}
