/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:39:04 by stalash           #+#    #+#             */
/*   Updated: 2025/02/05 19:26:03 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

// Constructor to initialize index and oldest_index
PhoneBook::PhoneBook() : index(0), oldest_index(0) {}

void PhoneBook::add_info(const Contact &new_contact)
{
	if (index < 8)
	{
		contacts[index] = new_contact;
		index++;
	}
	else
	{
		contacts[oldest_index] = new_contact;
		oldest_index = (oldest_index + 1) % 8;
	}
}

void PhoneBook::search_info() const
{
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nick Name" << "\n";
	for (int i = 0; i < index; ++i)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << contacts[i].retrieve_first_name()
				  << "|" << std::setw(10) << contacts[i].retrieve_last_name() << "|"
				  << std::setw(10) << contacts[i].retrieve_nick_name() << "\n";
	}
}

void PhoneBook::display_info(int i) const
{
	if (i >= 0 && i < index)
		contacts[i].display_content();
	else
		std::cout << "Invalid Index" << std::endl;
}
