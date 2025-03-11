/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:06:04 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 14:26:12 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	total_contacts = 0;	
}

void PhoneBook::ADDContact()
{
	Contact newContact;

	newContact.setContact();
	
	contacts[index] = newContact;

	index++;
	total_contacts++;
	
}

// Função auxiliar para formatar a string
std::string formatField(std::string field) {
    if (field.length() > 10)
        return field.substr(0, 9) + "."; // Truncar e adicionar '.'
    return field;
}

void PhoneBook::SEARCHContacts() const {
    if (total_contacts == 0) {
        std::cout << "A lista de contactos está vazia." << std::endl;
        return;
    }

    // Cabeçalho
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    // Listar contactos
    for (int i = 0; i < total_contacts; i++) {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
    }
}