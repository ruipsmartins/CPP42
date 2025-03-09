/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 17:42:38 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/03/09 12:43:53 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int main (int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	else
	{
		for(int i = 1; argv[i]; i++)
		{
			for(int j = 0; argv[i][j]; j++)
			{
				std::cout << (char)toupper(argv[i][j]); 
			}
		}
	}
	
	std::cout << std::endl;

	return 0;
}