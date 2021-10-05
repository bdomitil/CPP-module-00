/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdomitil <bdomitil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:49:44 by bdomitil          #+#    #+#             */
/*   Updated: 2021/10/05 21:31:31 by bdomitil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.hpp"

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

void phonebook :: increase_cont_num()
{
	_cont_num++;
	if (_cont_num == 8)
 		_cont_num = 0;
}


void phonebook :: add_contact ()
{
	string tmp;
	phonebook phonebook;

	std::cout << "please input first name >>";
	std::cin >> tmp;
	_contacts[_cont_num].set_firstnama(tmp);
	std::cout << "please input last name >>";
	std::cin >> tmp;
	_contacts[_cont_num].set_lastnama(tmp);
	std::cout << "please input nickname >>";
	std::cin >> tmp;
	_contacts[_cont_num].set_nicknama(tmp);
	std::cout << "please input phonenumber >>";
	std::cin >> tmp;
	_contacts[_cont_num].set_phonenumber(tmp);
	std::cout << "please input darkest sercret >>";
	std::cin >> tmp;
	_contacts[_cont_num].set_darkestSecret(tmp);
	increase_cont_num();
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

void phonebook :: search_contact()
{
	if (_cont_num == 0)
	{
		std::cout << "there is nothing to list, add some contacts first" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_cont_num ; i++)
	{
		std::cout.width(10);
		std::cout << i << "|" << fixed_len_str(_contacts[i].get_firstname())  << \
							"|" << fixed_len_str(_contacts[i].get_lastname()) << \
							"|" << fixed_len_str(_contacts[i].get_nickname()) << std::endl;
	}
	std::cout << "Type an index of recording u want to list >> " ;
	int index  = -1;
	std::cin >> index;
	if (index < 0 || index > 7 || index >= _cont_num )
		std::cout << "index is out of range" << std::endl;
	else
		{
			std::cout.width (10);
			std::cout << index << "|" << _contacts[index].get_firstname()  << \
									"|" << _contacts[index].get_lastname() << \
									"|" << _contacts[index].get_nickname() <<  \
									"|" << _contacts[index].get_phonenumber() << \
									"|" << _contacts[index].get_darkestSecret() << std::endl;

		}
}

int main()
{
	string command;
	phonebook phonebook;
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
				phonebook.add_contact();
				cont_num++;
				continue ;
			}
			case search_ :{
				
				phonebook.search_contact();
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