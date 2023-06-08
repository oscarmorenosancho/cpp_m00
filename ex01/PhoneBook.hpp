/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:30 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 13:06:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contactArray[8];
public:
	PhoneBook(/* args */);
	~PhoneBook();
	int			AddContact(Contact& contact);
	Contact*	SearchContact(string name);
	void		DisplayContacts(void);
};

#endif