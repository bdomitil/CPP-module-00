/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdomitil <bdomitil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 00:42:50 by bdomitil          #+#    #+#             */
/*   Updated: 2021/10/03 01:51:28 by bdomitil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

typedef std::string string;

enum com_type {

	exit_,
	add_,
	search_,
	undef_
} ;

class contact 
{
public :
	contact(){};
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};