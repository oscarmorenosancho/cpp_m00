/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:30 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 16:36:17 by omoreno-         ###   ########.fr       */
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
	Contact*	searchContact(std::string name);
	void		displayContacts(void);
};

#endif