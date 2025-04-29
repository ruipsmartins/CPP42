/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:42 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/04/29 17:12:47 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

public:
	void setFirstName(const std::string &first_name);
	void setLastName(const std::string &last_name);
	void setNickname(const std::string &nickname);
	void setPhoneNumber(const std::string &phone_number);
	void setSecret(const std::string &secret);
	void newContact();

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getSecret() const;
};

#endif