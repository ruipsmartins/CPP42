/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:46:47 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/03 12:24:21 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{

	int numberZ = 6;

	Zombie *horda = zombieHorde(numberZ, "HeapZombie");

	for (int i = 0; i < numberZ; i++)
	{
		std::cout << "zombie number = " << i << std::endl;
		horda[i].announce();
	}

	delete[] horda;

	return 0;
}