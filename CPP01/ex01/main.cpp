/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:46:47 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/14 10:51:30 by ruidos-s         ###   ########.fr       */
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