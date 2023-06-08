/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:42 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 13:09:16 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <string>
using namespace std;

class Contact
{
private:
	static unsigned int	lastOrdinal;
	unsigned int		ordinal;
	string				name;
	string				lastName;
	string				nickName;
	string				phoneNumber;
	string				darkestSecret;

public:
	Contact();
	Contact(string name, string lastName, string nickName, string phoneNumber,
			string darkestSecret);
	~Contact();
	bool isName(string name);
};

#endif