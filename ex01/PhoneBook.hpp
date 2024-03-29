/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:30 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/13 10:00:52 by omoreno-         ###   ########.fr       */
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
	PhoneBook();
	~PhoneBook();
	PhoneBook& 		operator=(PhoneBook& b);
	int				AddContact(Contact& contact);
	Contact*		searchContact(std::string name);
	unsigned int	searchOldestContact();
	void			displayContacts(std::ostream& os);
	void			displayContact(std::ostream& os, int index);
};

#endif