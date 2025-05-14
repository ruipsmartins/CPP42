/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:12:10 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/14 11:12:12 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>


int main (int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		std::cerr << "Available levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}
	
	harl.complain(argv[1]);
	
	return 0;
}