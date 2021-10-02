/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdomitil <bdomitil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:49:44 by bdomitil          #+#    #+#             */
/*   Updated: 2021/10/03 01:55:06 by bdomitil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

std::string get_command ()
{
	string str;
	std::cout << "input a command >> ";
	std::cin >> str;

	return (str);
}

com_type get_type(string command)
{
	if (command == "EXIT")
		return (exit_);
	else if (command == "ADD")
		return(add_);
	else if (command == "SEARCH")
		return(search_);
	return(undef_);
}

void add_contact (contact contacts[], int *cont_num)
{
	std::cout << "please input first name >>\n";
	std::cin >> contacts[*cont_num].first_name;
	std::cout << "please input last name >>\n";
	std::cin >> contacts[*cont_num].last_name;
	std::cout << "please input nickname >>\n";
	std::cin >> contacts[*cont_num].nickname;
	std::cout << "please input phonenumber >>\n";
	std::cin >> contacts[*cont_num].phone_number;
	std::cout << "please input darkest sercret >>\n";
	std::cin >> contacts[*cont_num].darkest_secret;
	(*cont_num)++;
}

void search_contact(contact contacts[], int last_cont)
{
	
}

int main()
{
	string command;
	contact contacts[8];
	int cont_num = 0;

	while (command != "EXIT")
	{
		command = get_command();
		std::cout << command << "\n" ;
		switch ((int)get_type(command))
		{
			case exit_ :
				exit(0);
			case add_:
				add_contact(contacts, &cont_num);
			case search_ :
				search_contact(contacts, cont_num);
			default :
				continue ;
		}
		if (cont_num > 7)
			cont_num = 0;
	}
	
}