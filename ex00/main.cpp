/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdomitil <bdomitil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:23:40 by bdomitil          #+#    #+#             */
/*   Updated: 2021/10/03 00:39:20 by bdomitil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string get_str()
{
	std::string to_read;
	std::cin >> to_read;
	return (to_read);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::string str =  get_str();
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] > 98 && str[i] < 123)
				str[i] -= 32;
		}
		std::cout << str;
	}
	else
	{
		std::string full_str;
		for (int i = 1; i < argc; i++)
		{
			full_str += argv[i];
			i++;
		}
		for (int i = 0; full_str[i] != '\0'; i++)
		{
			if (full_str[i] > 98 && full_str[i] < 123)
				full_str[i] -= 32;
		}
		std::cout << full_str;
	}
}