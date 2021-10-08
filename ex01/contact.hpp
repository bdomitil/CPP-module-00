/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdomitil <bdomitil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:42:50 by bdomitil          #+#    #+#             */
/*   Updated: 2021/10/08 16:50:26 by bdomitil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <stdio.h>

typedef std::string string;

enum com_type {

	exit_,
	add_,
	search_,
	undef_
} ;

class contact 
{
private :
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public :
	void set_firstnama(string _first_name){this->_first_name = _first_name;}
	string get_firstname(){return this-> _first_name;}
	void set_lastnama(string _last_name){this->_last_name = _last_name;}
	string get_lastname(){return this-> _last_name;}
	void set_nicknama(string _nickname){this->_nickname = _nickname;}
	string get_nickname(){return this-> _nickname;}
	void set_phonenumber(string _phone_number){this->_phone_number = _phone_number;}
	string get_phonenumber(){return this-> _phone_number;}
	void set_darkestSecret(string _darkest_secret){this->_darkest_secret = _darkest_secret;}
	string get_darkestSecret(){return this-> _darkest_secret;}
};

