/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:36:03 by msacaliu          #+#    #+#             */
/*   Updated: 2024/11/05 12:36:04 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	int i;
	size_t j;
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			std::string str(argv[i]);
			while(j < str.length())
			{
				std::cout << (char)std::toupper(str[j++]);
			}
			i++;
		}
		std::cout << std::endl;
	}
	return(0);
}
