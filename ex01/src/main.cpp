/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:56:22 by stalash           #+#    #+#             */
/*   Updated: 2025/02/04 19:07:49 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

bool	get_contact(const std::string &prompt, std::string &str)
{
	std::cout<<prompt<<std::endl;
	std::getline(std::cin, str);
	if (str.empty())
	{
		std::cout<<"All fields must be filled"<<std::endl;
		return (1);
	}
	return(0);
}

bool	ft_isAscii(const std::string &str)
{
	for (int i = 0; i < str.length(); i++)
		if (str[i] < 32 || str[i] > 126)
			return (std::cout<<"The string should be Printable\n", false);
	return (true);
}

bool	ft_isPhoneNumberValid(const std::string &phone_number)
{
	int i = 0;
	if (phone_number[0] == '+')
		i = 1;
	while (i < phone_number.length())
	{
		if (phone_number[i] < '0' || phone_number[i] > '9')
			return (std::cout<<"phone number is not a number\n", false);
		i++;
	}
	return (true);
}

bool	isValidContact(const std::string &first_name, const std::string &last_name, \
						const std::string &nick_name, const std::string &phone_number, \
						const std::string &darkest_secret)
{
	if (!ft_isAscii(first_name))
		return (false);
	if (!ft_isAscii(last_name))
		return (false);
	if (!ft_isAscii(nick_name))
		return (false);
	if (!ft_isAscii(darkest_secret))
		return (false);
	if (!ft_isPhoneNumberValid(phone_number))
		return (false);
	return (true);
}

void	addContactToPhoneBook(PhoneBook &phone_book)
{
	contact	new_contact;
	std::string	first_name, last_name, nick_name, phone_number, darkest_secret;
	
	if (get_contact("First Name: ", first_name)) return;
	if (get_contact("Last Name: ", last_name)) return;
	if (get_contact("Nick Name: ", nick_name)) return;
	if (get_contact("Phone Number: ", phone_number)) return;
	if (get_contact("Darkest Secret: ", darkest_secret)) return;
	if (!isValidContact(first_name, last_name, nick_name, phone_number, darkest_secret))
		return ;
	else
	{
		new_contact.set_first_name(first_name);
		new_contact.set_last_name(last_name);
		new_contact.set_nick_name(nick_name);
		new_contact.set_phone_number(phone_number);
		new_contact.set_darkest_secret(darkest_secret);
		phone_book.add_info(new_contact);
	}
}

int	main()
{
	PhoneBook	phone_book;
	std::string line;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Enter your Command (ADD, SEARCH, EXIT)" << std::endl;
		getline(std::cin, line);
		if (line == "ADD")
			addContactToPhoneBook(phone_book);
		else if (line == "SEARCH")
		{
			phone_book.search_info();
			std::cout<<"Enter index to display: ";
			std::cin>>i;
			std::cin.ignore();
			phone_book.display_info(i);
		}
		else if (line == "EXIT")
			break ;
		else
			std::cout<<"Invalid command!"<<std::endl;
	}
	return (0);
}
