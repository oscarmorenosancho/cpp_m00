/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:34 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/09 18:41:28 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

PhoneBook& 	PhoneBook::operator=(PhoneBook& b)
{
	return (b);
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

unsigned int	PhoneBook::searchOldestContact()
{
	unsigned int	i;
	unsigned int	oldest;
	unsigned int oldestOrdinal;

	oldest = 0;
	oldestOrdinal = contactArray[0].getOrdinal();
	i = 1;
	while (i < 8)
	{
		unsigned int curOrdinal = contactArray[i].getOrdinal();
		if (curOrdinal < oldestOrdinal)
		{
			oldestOrdinal = curOrdinal;
			oldest = i;
		}
		i++;
	}
	return (oldest);
}

int	PhoneBook::AddContact(Contact& contact)
{
	unsigned int	index;

	index = searchOldestContact();
	contactArray[index] = contact;
	return (index);
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
