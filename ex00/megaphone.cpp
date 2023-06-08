/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:16:07 by omoreno-          #+#    #+#             */
/*   Updated: 2023/06/08 12:15:22 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int	i;

	if (argc < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		string	Str(argv[i]);
		transform(Str.begin(), Str.end(), Str.begin(), ::toupper);
		cout << Str;
		i++;
	}
	cout << endl;
	return (0);
}
