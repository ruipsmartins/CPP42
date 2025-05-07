/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:38 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/07 11:46:06 by ruidos-s         ###   ########.fr       */
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

	do {
		std::cout << "Enter first name: " << std::endl;
		if (!std::getline(std::cin, input))
			return;
		if (input.empty())
			std::cout << "Input cannot be empty" << std::endl;
		else
			this->setFirstName(input);
	} while (input.empty());

	do {
		std::cout << "Enter last name: " << std::endl;
		if (!std::getline(std::cin, input))
			return;
		if (input.empty())
			std::cout << "Input cannot be empty" << std::endl;
		else
			this->setLastName(input);
	} while (input.empty());

	do {
		std::cout << "Enter nickname: " << std::endl;
		if (!std::getline(std::cin, input))
			return;
		if (input.empty())
			std::cout << "Input cannot be empty" << std::endl;
		else
			this->setNickname(input);
	} while (input.empty());

	do {
		std::cout << "Enter phone number: " << std::endl;
		if (!std::getline(std::cin, input))
			return;
		if (input.empty())
			std::cout << "Input cannot be empty" << std::endl;
		else
			this->setPhoneNumber(input);
	} while (input.empty());

	do {
		std::cout << "Enter darkest secret: " << std::endl;
		if (!std::getline(std::cin, input))
			return;
		if (input.empty())
			std::cout << "Input cannot be empty" << std::endl;
		else
			this->setSecret(input);
	} while (input.empty());

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
