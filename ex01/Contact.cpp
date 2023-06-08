/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:44 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 18:07:01 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->ordinal = this->lastOrdinal;
	++this->lastOrdinal;
	this->firstName = std::string("");
	this->lastName = std::string("");
	this->nickName = std::string("");
	this->phoneNumber = std::string("");
	this->darkestSecret = std::string("");
}

Contact::~Contact()
{
}

Contact::Contact(std::string name, std::string lastName, std::string nickName,
				 std::string phoneNumber, std::string darkestSecret)
{
	this->ordinal = this->lastOrdinal;
	++this->lastOrdinal;
	this->firstName = name;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::Contact(const Contact &contact)
{
	this->ordinal =  contact.ordinal;
	this->firstName = contact.firstName;
	this->lastName = contact.lastName;
	this->nickName = contact.nickName;
	this->phoneNumber = contact.phoneNumber;
	this->darkestSecret = contact.darkestSecret;
}

Contact& Contact::operator=(const Contact& contact)
{
	this->ordinal =  contact.ordinal;
	this->firstName = contact.firstName;
	this->lastName = contact.lastName;
	this->nickName = contact.nickName;
	this->phoneNumber = contact.phoneNumber;
	this->darkestSecret = contact.darkestSecret;
	return (*this);
}

bool Contact::isName(std::string name)
{
	return (this->firstName == name);
}

std::ostream& Contact::print(std::ostream& os, int index)
{
	os << std::setw(10); 
	os << std::setfill (' ');
	std::cout.setf (std::ios_base::right , std::ios_base::adjustfield);
	os << index << "|";
	os << this->firstName << "|";
	os << this->lastName << "|";
	os << this->nickName;
	os << std::endl;
	return	(os);
}

std::ostream& Contact::print(std::ostream& os)
{
	os << "First Name:     " << this->firstName << std::endl;
	os << "Last Name:      " << this->lastName << std::endl;
	os << "Nickname:       " << this->nickName << std::endl;
	os << "Phone Number:   " << this->phoneNumber << std::endl;
	os << "Darkest Secret: " << this->darkestSecret << std::endl;
	os << std::endl;
	return	(os);
}