/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:34 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 13:11:16 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

Contact*	PhoneBook::SearchContact(string name)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (contactArray[i].isName(name))
			return (&contactArray[i]); 
		i++;
	}
	return (nullptr);
}

void		PhoneBook::DisplayContacts(void)
{
	
}