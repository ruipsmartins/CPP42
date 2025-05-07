/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:38 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/05/07 13:43:48 by ruidos-s         ###   ########.fr       */
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

std::string Contact::promptInput(const std::string &fieldName)
{
	std::string input;

	do
	{
		std::cout << "Enter " << fieldName << ": " << std::endl;
		if (!std::getline(std::cin, input))
			return "";
		if (input.empty())
			std::cout << "Input cannot be empty" << std::endl;
		if (fieldName.compare("phone number") == 0)
		{
			long number;
			std::stringstream ss(input);
			if ((ss >> number) && ss.eof() && number > 0)
				break;
			else
			{
				std::cout << "Invalid input. Please enter a valid phone number." << std::endl;
				input.clear();
			}
		}

	} while (input.empty());

	return input;
}

void Contact::newContact()
{
	std::string input;

	input = promptInput("first name");
	if (input.empty())
		return;
	this->setFirstName(input);

	input = promptInput("last name");
	if (input.empty())
		return;
	this->setLastName(input);

	input = promptInput("nickname");
	if (input.empty())
		return;
	this->setNickname(input);

	input = promptInput("phone number");
	if (input.empty())
		return;
	this->setPhoneNumber(input);

	input = promptInput("darkest secret");
	if (input.empty())
		return;
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
