/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:16:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 16:27:38 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char const *argv[])
{
	int	i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		std::string	Str(argv[i]);
		std::transform(Str.begin(), Str.end(), Str.begin(), ::toupper);
		std::cout << Str;
		i++;
	}
	std::cout << std::endl;
	return (0);
}
