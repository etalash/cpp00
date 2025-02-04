/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:02:50 by stalash           #+#    #+#             */
/*   Updated: 2025/02/04 17:40:59 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    contact	contacts[8];
    int		index;
	int		oldest_index;
public:
    PhoneBook()
    {
        index = 0;
        oldest_index = 0;
    }
	void    add_info(const contact new_contact);
    void    search_info()const;
    void    display_info(int i)const;
};

#endif
