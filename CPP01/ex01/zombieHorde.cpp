/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:43:31 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/03 12:14:17 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return NULL;
	
	Zombie *horde = new Zombie[N];
	
	for (int i = 0; i< N; i++)
		horde[i].setName(name);

	return horde;
}
