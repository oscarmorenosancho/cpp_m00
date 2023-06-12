/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:42 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/12 11:11:23 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
private:
	static unsigned int	_lastOrdinal;
	unsigned int		_ordinal;
	std::string			_firstName;
	std::string			_lastName;
	std::string			_nickName;
	std::string			_phoneNumber;
	std::string			_darkestSecret;

public:
	Contact();
	~Contact();
	Contact(std::string name, std::string lastName, std::string nickName, 
			std::string phoneNumber, std::string darkestSecret);
	Contact(const Contact& b);
	Contact& 			operator=(const Contact& b);
	bool 				isName(std::string name);
	unsigned int		getOrdinal();
	std::ostream& 		printTrim(std::ostream& os, std::string field);
	std::ostream& 		print(std::ostream& os, int row);
	std::ostream& 		print(std::ostream& os);
};

#endif