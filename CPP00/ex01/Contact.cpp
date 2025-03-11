/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:06:44 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 12:18:50 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#include "Contact.hpp"

void Contact::setContact() {
    std::cout << "First Name: ";
    std::getline(std::cin, first_name);
    std::cout << "Last Name: ";
    std::getline(std::cin, last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkest_secret);
}

void Contact::displayContact() const {
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}