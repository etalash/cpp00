/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:43:30 by stalash           #+#    #+#             */
/*   Updated: 2025/02/02 19:33:06 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_num;
		std::string	darkest_secret;
	public:
		void	setFirstName(const std::string &fist_name);
		void	setLastName(const std::string &last_name);
		void	setNickName(const std::string &nick_name);
		void	setPhoneNumber(const std::string &phone_num);
		void	setDarkestSecret(const std::string &darkest_secret);

		std::string	putFirstName() const;
		std::string	putLastName() const;
		std::string	putNickName() const;
		std::string	putPhoneNumber() const;
		std::string	putDarkestSecret() const;

		void	display();
};

#endif
