/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:42 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 18:16:35 by omoreno-         ###   ########.fr       */
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
	static unsigned int	lastOrdinal;
	unsigned int		ordinal;
	std::string			firstName;
	std::string			lastName;
	std::string			nickName;
	std::string			phoneNumber;
	std::string			darkestSecret;

public:
	Contact();
	Contact(std::string name, std::string lastName, std::string nickName, 
			std::string phoneNumber, std::string darkestSecret);
	Contact(const Contact& b);
	Contact& operator=(const Contact& b);
	~Contact();
	bool 	isName(std::string name);
	std::ostream& print(std::ostream& os, int row);
	std::ostream& print(std::ostream& os);
};

#endif