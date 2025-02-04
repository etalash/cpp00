/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:44:37 by stalash           #+#    #+#             */
/*   Updated: 2025/02/03 15:20:42 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define	CONTACT_HPP
#include <iostream>

class contact
{
private:
	std::string first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	void		set_first_name(std::string		f_name);
	void		set_last_name(std::string		l_name);
	void		set_nick_name(std::string		n_name);
	void		set_phone_number(std::string	p_number);
	void		set_darkest_secret(std::string	d_secret);

	std::string	retrieve_first_name()		const;
	std::string	retrieve_last_name()		const;
	std::string	retrieve_nick_name()		const;
	std::string	retrieve_phone_number()		const;
	std::string	retrieve_darkest_secret()	const;

	void		display_content()	const;
};

#endif