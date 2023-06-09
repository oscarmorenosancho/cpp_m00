/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookMenu.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:55:54 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/09 15:31:06 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKMENU_HPP
#define PHONEBOOKMENU_HPP
# include "PhoneBook.hpp"
# include <string>

class PhoneBookMenu
{
private:
	PhoneBook	phoneBook;
public:
	PhoneBookMenu();
	~PhoneBookMenu();
	void		showMainMenu(std::ostream& os);
	int			getInt(std::istream& is);
	std::string	getField(std::istream& is, std::ostream& os, std::string fieldName);
	int			waitMainCommand(std::istream& is);
	void		openAddForm(std::istream& is, std::ostream& os);
	void		showSearchMenu(std::ostream& os);
	int			waitIndex(std::istream& is, std::ostream& os);
	void		menuLoop(std::istream& is, std::ostream& os);
};
#endif