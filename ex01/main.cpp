/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:26:29 by stalash           #+#    #+#             */
/*   Updated: 2025/02/02 19:28:35 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			Contact new_contact;
			std::string first_name, last_name, nickname, phone_number, darkest_secret;

			std::cout << "First Name: ";
			std::getline(std::cin, first_name);
			std::cout << "Last Name: ";
			std::getline(std::cin, last_name);
			std::cout << "Nickname: ";
			std::getline(std::cin, nickname);
			std::cout << "Phone Number: ";
			std::getline(std::cin, phone_number);
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, darkest_secret);

			if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
			{
				std::cout << "All fields must be filled!" << std::endl;
			}
			else
			{
				new_contact.setFirstName(first_name);
				new_contact.setLastName(last_name);
				new_contact.setNickName(nickname);
				new_contact.setPhoneNumber(phone_number);
				new_contact.setDarkestSecret(darkest_secret);
				phonebook.addContact(new_contact);
			}
		}
		else if (command == "SEARCH")
		{
			phonebook.searchContacts();
			std::cout << "Enter index to display: ";
			int index;
			std::cin >> index;
			std::cin.ignore(); // To clear the newline character
			phonebook.displayContact(index);
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
	}

	return 0;
}
