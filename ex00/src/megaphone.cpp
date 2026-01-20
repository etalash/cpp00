/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:41:57 by stalash           #+#    #+#             */
/*   Updated: 2025/01/30 16:34:46 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl, 0);
	int i = 1;
	while (argc > i)
	{
		std::string str = argv[i];
		for (int j = 0; (int)str.size() > j; ++j)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = std::toupper(static_cast<unsigned char>(str[j]));
		}
		std::cout<< str;
		++i;
	}
	std::cout <<std::endl;
	return (0);
}
