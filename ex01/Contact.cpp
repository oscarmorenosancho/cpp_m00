/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:44 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/09 18:47:35 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

unsigned int Contact::_lastOrdinal = 0;

Contact::Contact()
{
	_ordinal = _lastOrdinal;
	++_lastOrdinal;
	_firstName = std::string("");
	_lastName = std::string("");
	_nickName = std::string("");
	_phoneNumber = std::string("");
	_darkestSecret = std::string("");
}

Contact::~Contact()
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName,
				 std::string phoneNumber, std::string darkestSecret)
{
	_ordinal = _lastOrdinal;
	++_lastOrdinal;
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}

Contact::Contact(const Contact &b)
{
	_ordinal =  b._ordinal;
	_firstName = b._firstName;
	_lastName = b._lastName;
	_nickName = b._nickName;
	_phoneNumber = b._phoneNumber;
	_darkestSecret = b._darkestSecret;
}

Contact& Contact::operator=(const Contact& b)
{
	_ordinal =  b._ordinal;
	_firstName = b._firstName;
	_lastName = b._lastName;
	_nickName = b._nickName;
	_phoneNumber = b._phoneNumber;
	_darkestSecret = b._darkestSecret;
	return (*this);
}

bool Contact::isName(std::string firstName)
{
	return (this->_firstName == firstName);
}

unsigned int	Contact::getOrdinal()
{
	return (_ordinal);
}


std::ostream& Contact::printTrim(std::ostream& os, std::string field)
{
	if (field.length() < 11)
	{
		os << std::setfill (' ');
		os << std::setw(10); 
		std::cout.setf (std::ios_base::right , std::ios_base::adjustfield);
		os << field;
	}
	else
	{
		os << field.substr(0, 9) << ".";
	}
	os << std::setw(1) << "|"; 
	return (os);
}

std::ostream& Contact::print(std::ostream& os, int index)
{
	os << std::setw(1) << "|"; 
	os << std::setw(10); 
	os << std::setfill (' ');
	std::cout.setf (std::ios_base::right , std::ios_base::adjustfield);
	os << index;
	os << std::setw(1) << "|"; 
	printTrim(os, _firstName);
	printTrim(os, _lastName);
	printTrim(os, _nickName);
	os << std::endl;
	return	(os);
}

std::ostream& Contact::print(std::ostream& os)
{
	os << "First Name:     " << _firstName << std::endl;
	os << "Last Name:      " << _lastName << std::endl;
	os << "Nickname:       " << _nickName << std::endl;
	os << "Phone Number:   " << _phoneNumber << std::endl;
	os << "Darkest Secret: " << _darkestSecret << std::endl;
	os << std::endl;
	return	(os);
}