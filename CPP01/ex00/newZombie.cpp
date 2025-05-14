/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:47:51 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/14 10:22:50 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	if (!zombie)
	{
		std::cerr << "Failed to allocate memory for "<< name << std::endl;
		return (NULL);
	}

	return (zombie);
}