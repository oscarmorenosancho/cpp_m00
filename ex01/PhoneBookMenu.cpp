/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookMenu.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:55:56 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/09 14:16:57 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookMenu.hpp"

PhoneBookMenu::PhoneBookMenu()
{
}

PhoneBookMenu::~PhoneBookMenu()
{
}

void	PhoneBookMenu::showMainMenu(std::ostream& os)
{
	os << "MAIN MENU" << std::endl;
	os << "\tADD" << std::endl;
	os << "\tSEARCH" << std::endl;
	os << "\tEXIT" << std::endl;
	os << "> ";
}

int		PhoneBookMenu::waitMainCommand(std::istream& is)
{
	std::string	command;

	is >> command;
	if (command == "EXIT")
		return (0);
	if (command == "ADD")
		return (1);
	if (command == "SEARCH")
		return (2);
	return (-1);
}

void	PhoneBookMenu::openAddForm(std::istream& is, std::ostream& os)
{
	(void)is;
	(void)os;
}

void	PhoneBookMenu::showSearchMenu(std::ostream& os)
{
	os << "SEARCH MENU" << std::endl;
	phoneBook.displayContacts(os);
	os << "> ";
}

int		PhoneBookMenu::getInt(std::istream& is)
{
	int			value;
	std::string	inputVal;

	is >> inputVal;
	try
	{
		value = std::stoi(inputVal);
	}
	catch(...)
	{
		value = -1;
	}
	return (value);
}

int		PhoneBookMenu::waitIndex(std::istream& is, std::ostream& os)
{
	int			index;

	index = getInt(is);
	while (index < 0 || index > 7)
	{
		os << "Invalid index, try again." << std::endl;
		os << "> ";
		index = getInt(is);
	}
	return (index);
}

void	PhoneBookMenu::menuLoop(std::istream& is, std::ostream& os)
{
	int cmd;

	os << "Welcome to PhoneBook!" << std::endl;
	os << std::endl;
	showMainMenu(os);
	cmd = waitMainCommand(is);
	while (cmd)
	{
		if (cmd == 1)
			openAddForm(is, os);
		else if (cmd == 2)
		{
			showSearchMenu(os);
			phoneBook.displayContact(os, waitIndex(is, os));
		}
		else
		{
			os << "Invalid command try again." << std::endl;
		}
		showMainMenu(os);
		cmd = waitMainCommand(is);
	}
	os << "Exit from Phone Book" << std::endl;
}