/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:06:38 by stalash           #+#    #+#             */
/*   Updated: 2025/02/03 16:01:47 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	contact::set_first_name(std::string f_name){
	first_name = f_name;
}
void	contact::set_last_name(std::string l_name){
    last_name = l_name;
}
void	contact::set_nick_name(std::string n_name){
	nick_name = n_name;
}
void	contact::set_phone_number(std::string p_number){
	phone_number = p_number;
}
void	contact::set_darkest_secret(std::string d_secret){
	darkest_secret = d_secret;
}


std::string	contact::retrieve_first_name()const{
	return (first_name);
}
std::string	contact::retrieve_last_name()const{
	return (last_name);
}
std::string	contact::retrieve_nick_name()const{
	return (nick_name);
}
std::string	contact::retrieve_phone_number() const{
	return (phone_number);
}
std::string	contact::retrieve_darkest_secret() const{
	return (darkest_secret);
}

void	contact::display_content()	const{
	std::cout<<"First Name is: "<<first_name<<std::endl;
	std::cout<<"Last Name is: "<<last_name<<std::endl;
	std::cout<<"Nick Name is: "<<nick_name<<std::endl;
	std::cout<<"Phone Number is: "<<phone_number<<std::endl;
	std::cout<<"Darkest Secret is: "<<darkest_secret<<std::endl;
}