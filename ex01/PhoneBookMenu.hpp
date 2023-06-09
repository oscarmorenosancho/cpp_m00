/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookMenu.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:55:54 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/09 13:05:33 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKMENU_HPP
#define PHONEBOOKMENU_HPP
#include "PhoneBook.hpp"

class PhoneBookMenu
{
private:
	PhoneBook	phoneBook;
public:
	PhoneBookMenu();
	~PhoneBookMenu();
	void	showMainMenu(std::ostream& os);
	int		waitMainCommand(std::istream& is);
	void	openAddForm(std::istream& is, std::ostream& os);
	void	showSearchMenu(std::ostream& os);
	int		waitIndex(std::istream& is);
	void	menuLoop(std::istream& is, std::ostream& os);
};
#endif