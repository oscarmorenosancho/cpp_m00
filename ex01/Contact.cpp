/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:44 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 13:10:24 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->ordinal = this->lastOrdinal;
	++this->lastOrdinal;
	this->name = string("");
	this->lastName = string("");
	this->nickName = string("");
	this->phoneNumber = string("");
	this->darkestSecret = string("");
}

Contact::Contact(string name, string lastName, string nickName, string phoneNumber,
			string darkestSecret)
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

bool Contact::isName(string name)
{
	return (this->name == name);
}