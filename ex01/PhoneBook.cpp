/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:26:00 by stalash           #+#    #+#             */
/*   Updated: 2025/02/02 19:35:36 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : contact_count(0), oldest_index(0) {}

void PhoneBook::addContact(const Contact &new_contact)
{
	if (contact_count < 8)
	{
		contacts[contact_count] = new_contact;
		contact_count++;
	}
	else
	{
		contacts[oldest_index] = new_contact;
		oldest_index = (oldest_index + 1) % 8;
	}
}

void PhoneBook::searchContacts() const
{
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << (contacts[i].putFirstName().size() > 10 ? contacts[i].putFirstName().substr(0, 9) + "." : contacts[i].putFirstName()) << "|"
				  << std::setw(10) << (contacts[i].putLastName().size() > 10 ? contacts[i].putLastName().substr(0, 9) + "." : contacts[i].putLastName()) << "|"
				  << std::setw(10) << (contacts[i].putNickName().size() > 10 ? contacts[i].putNickName().substr(0, 9) + "." : contacts[i].putNickName()) << std::endl;
	}
}

void PhoneBook::displayContact(int index) const
{
	if (index >= 0 && index < contact_count)
	{
		contacts[index].displayContact();
	}
	else
	{
		std::cout << "Invalid index." << std::endl;
	}
}
