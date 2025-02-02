/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stalash <stalash@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:10:43 by stalash           #+#    #+#             */
/*   Updated: 2025/02/02 18:36:29 by stalash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int j = 1;
	int i = 0;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (j < argc)
	{
		while (argv[j][i])
		{
			argv[j][i] = std::toupper(static_cast<unsigned char>(argv[j][i]));
			++i;
		}
		++j;
	}
	j = 1;
	while (j < argc)
	{
		std::cout << argv[j];
		if (j < argc - 1)
			std::cout << " ";
		++j;
	}
	std::cout << std::endl;
	return (0);
}
