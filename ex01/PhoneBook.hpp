/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:17:29 by stalash           #+#    #+#             */
/*   Updated: 2025/02/02 19:27:35 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int contact_count;
	int oldest_index;

public:
	PhoneBook();
	void addContact(const Contact &new_contact);
	void searchContacts() const;
	void displayContact(int index) const;
};

#endif
