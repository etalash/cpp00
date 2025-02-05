/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:06:38 by stalash           #+#    #+#             */
/*   Updated: 2025/02/05 19:25:46 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

// Default constructor
Contact::Contact() : first_name(""), last_name(""), nick_name(""), phone_number(""), darkest_secret("") {}

// Destructor
Contact::~Contact() {}

// Copy constructor
Contact::Contact(const Contact &other)
{
	first_name = other.first_name;
	last_name = other.last_name;
	nick_name = other.nick_name;
	phone_number = other.phone_number;
	darkest_secret = other.darkest_secret;
}

// Assignment operator
Contact &Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		first_name = other.first_name;
		last_name = other.last_name;
		nick_name = other.nick_name;
		phone_number = other.phone_number;
		darkest_secret = other.darkest_secret;
	}
	return *this;
}

// Getter and Setter methods
void Contact::set_first_name(const std::string &f_name) { first_name = f_name; }
void Contact::set_last_name(const std::string &l_name) { last_name = l_name; }
void Contact::set_nick_name(const std::string &n_name) { nick_name = n_name; }
void Contact::set_phone_number(const std::string &p_number) { phone_number = p_number; }
void Contact::set_darkest_secret(const std::string &d_secret) { darkest_secret = d_secret; }

std::string Contact::retrieve_first_name() const { return first_name; }
std::string Contact::retrieve_last_name() const { return last_name; }
std::string Contact::retrieve_nick_name() const { return nick_name; }
std::string Contact::retrieve_phone_number() const { return phone_number; }
std::string Contact::retrieve_darkest_secret() const { return darkest_secret; }

void Contact::display_content() const
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nick Name: " << nick_name << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
