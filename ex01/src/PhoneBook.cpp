/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:39:04 by stalash           #+#    #+#             */
/*   Updated: 2025/02/04 17:40:46 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

void PhoneBook::add_info(const contact new_contact)
{
	if (index <= 8)
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

std::string	formatString(const std::string &str)
{
	if (str.size() > 10)
		return (str.substr(0,9) + ".");
	return (str);
}

void PhoneBook::search_info() const 
{
	int i = 0;
	std::cout<<std::setw(10)<<"Index"<<"|"<< std::setw(10)<<"First Name"<< "|"
			<<std::setw(10)<<"Last Name"<<"|"<< std::setw(10)<<"Nick Name"<<"\n";
	while (i < index)
	{
		std::cout<<std::setw(10)<<i<<"|"
			<<std::setw(10)<<formatString(contacts[i].retrieve_first_name())<<"|"
			<<std::setw(10)<<formatString(contacts[i].retrieve_last_name())<<"|"
			<<std::setw(10)<<formatString(contacts[i].retrieve_nick_name())<<"\n";
		i++;
	}
}

void	PhoneBook::display_info(int i)const
{
	if (i >= 0 && i < index)
		contacts[i].display_content();
	else
		std::cout<<"Invalid Index."<<std::endl;
}
