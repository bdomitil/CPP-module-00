/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdomitil <bdomitil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:49:44 by bdomitil          #+#    #+#             */
/*   Updated: 2021/10/03 19:39:25 by bdomitil         ###   ########.fr       */
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

void add_contact (contact & contact)
{
	string tmp;
	std::cout << "please input first name >>";
	std::cin >> tmp;
	contact.set_firstnama(tmp);
	std::cout << "please input last name >>";
	std::cin >> tmp;
	contact.set_lastnama(tmp);
	std::cout << "please input nickname >>";
	std::cin >> tmp;
	contact.set_nicknama(tmp);
	std::cout << "please input phonenumber >>";
	std::cin >> tmp;
	contact.set_phonenumber(tmp);
	std::cout << "please input darkest sercret >>";
	std::cin >> tmp;
	contact.set_darkestSecret(tmp);
}

string fixed_len_str(string str)
{
	if (str.length() > 9)
	{
		str = str.substr(0, 9) + ".";
		return (str);	
	}
	return (str);
}

void search_contact(contact contacts[], int last_cont)
{
	for (int i = 0; i < last_cont; i++)
	{
		std::cout.width(10);
		std::cout << i << "|" << fixed_len_str(contacts[i].get_firstname())  << \
									"|" << fixed_len_str(contacts[i].get_lastname()) << \
									"|" << fixed_len_str(contacts[i].get_nickname()) << std::endl;
	}
	std::cout << "Type an index of recording u want to list >> " ;
	int index  = -1;
	std::cin >> index;
	if (index < 0 || index > 7 || index >= last_cont )
		std::cout << "index is out of range" << std::endl;
	else
		{
			std::cout.width (10);
			std::cout << index << "|" << contacts[index].get_firstname()  << \
									"|" << contacts[index].get_lastname() << \
									"|" << contacts[index].get_nickname() <<  \
									"|" << contacts[index].get_phonenumber() << \
									"|" << contacts[index].get_darkestSecret() << std::endl;

		}
}

int main()
{
	string command;
	contact contacts[8];
	int cont_num = 0;

	while (command != "EXIT")
	{
		command = get_command();
		switch ((int)get_type(command))
		{
			case exit_ :
				exit(0);
			case add_:
			{
				add_contact(contacts[cont_num]);
				cont_num++;
				continue ;
			}
			case search_ :{
				
				search_contact(contacts, cont_num);
				continue ;
			}
			default :
			{
				std::cout << "Please type 'ADD' , 'SEARCH' or 'EXIT'" << std::endl;
				continue ;
			}
		}
	}
	
}