/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:34 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 17:50:54 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

Contact*	PhoneBook::searchContact(std::string name)
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

void		PhoneBook::displayContacts(std::ostream& os)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		contactArray[i].print(os, i); 
		i++;
	}	
}

void		PhoneBook::displayContact(std::ostream& os, int index)
	{
		if (index >= 0 && index <=8)
		{
			contactArray[index].print(os); 
		}
	}
