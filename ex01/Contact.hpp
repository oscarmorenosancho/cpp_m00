/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:42 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 16:35:22 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <string>
# include <iostream>

class Contact
{
private:
	static unsigned int	lastOrdinal;
	unsigned int		ordinal;
	std::string			name;
	std::string			lastName;
	std::string			nickName;
	std::string			phoneNumber;
	std::string			darkestSecret;

public:
	Contact();
	Contact(std::string name, std::string lastName, std::string nickName, 
			std::string phoneNumber, std::string darkestSecret);
	~Contact();
	bool 	isName(std::string name);
	std::ostream& Contact::operator<<(std::ostream& os);
};

#endif