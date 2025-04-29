/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:38 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/04/29 17:12:41 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string &first_name)
{
	this->first_name = first_name;
}

void Contact::setLastName(const std::string &last_name)
{
	this->last_name = last_name;
}

void Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phone_number)
{
	this->phone_number = phone_number;
}

void Contact::setSecret(const std::string &secret)
{
	this->secret = secret;
}

void Contact::newContact()
{
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	this->setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	this->setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	this->setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	this->setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	this->setSecret(input);

	std::cout << "\nContact saved successfully!" << std::endl;
}

std::string Contact::getFirstName() const
{
	return (first_name);
}

std::string Contact::getLastName() const
{
	return (last_name);
}

std::string Contact::getNickname() const
{
	return std::string(nickname);
}

std::string Contact::getPhoneNumber() const
{
	return std::string(phone_number);
}

std::string Contact::getSecret() const
{
	return std::string(secret);
}
