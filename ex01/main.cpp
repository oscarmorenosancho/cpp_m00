/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:19:38 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/09 18:29:24 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookMenu.hpp"

int main(void)
{
	PhoneBookMenu phoneBookMenu;

	phoneBookMenu.menuLoop(std::cin, std::cout);
	return (0);
}
