#include "Contact.hpp"
#include <iostream>
#include <string>

void Contact::newContact(Contact& contact)
{
	std::string input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	contact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	contact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	contact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	contact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	contact.setSecret(input);

	std::cout << "\n Contact saved successfully!\n";
}
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
