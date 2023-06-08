/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:44 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 16:35:12 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->ordinal = this->lastOrdinal;
	++this->lastOrdinal;
	this->name = std::string("");
	this->lastName = std::string("");
	this->nickName = std::string("");
	this->phoneNumber = std::string("");
	this->darkestSecret = std::string("");
}

Contact::Contact(std::string name, std::string lastName, std::string nickName,
				 std::string phoneNumber, std::string darkestSecret)
{
	this->ordinal = this->lastOrdinal;
	++this->lastOrdinal;
	this->name = name;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

Contact::~Contact()
{
}

bool Contact::isName(std::string name)
{
	return (this->name == name);
}

std::ostream& Contact::operator<<(std::ostream& os)
{
    os << this->name << "|";
    os << this->lastName << "|";
	os << this->nickName << "|";
	os << this->phoneNumber << "|";
	os << this->darkestSecret;
	os << std::endl;
    return	(os);
}
