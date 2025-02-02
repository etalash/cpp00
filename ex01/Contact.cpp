/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:00:20 by stalash           #+#    #+#             */
/*   Updated: 2025/02/02 19:33:32 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

	void	Contact::setFirstName(const std::string &f_name){
		first_name = f_name;
	}
	void	Contact::setLastName(const std::string &l_name){
		last_name = l_name;
	}
	void	Contact::setNickName(const std::string &n_name){
		nick_name = n_name;
	}
	void	Contact::setPhoneNumber(const std::string &ph_num){
		phone_num = ph_num;
	}
	void	Contact::setDarkestSecret(const std::string &dark_secret){
		darkest_secret = dark_secret;
	}

	std::string	Contact::putFirstName() const{
		return (first_name);
	}
	std::string	Contact::putLastName() const{
		return (last_name);
	}
	std::string	Contact::putNickName() const{
		return (nick_name);
	}
	std::string	Contact::putPhoneNumber() const{
		return (phone_num);
	}
	std::string	Contact::putDarkestSecret() const{
		return(darkest_secret);
	}

	void	Contact::display(){
		std::cout<<"First Name is: " << first_name<<std::endl;
		std::cout<<"Last Name is: "<< last_name<<std::endl;
		std::cout<<"Nick Name is: "<< nick_name<<std::endl;
		std::cout<<"Phone Number is: "<< phone_num<<std::endl;
		std::cout<<"Darkest Secret is: "<< darkest_secret<<std::endl;
	}
