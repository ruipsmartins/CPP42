/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:11:54 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/04/29 17:12:04 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class PhoneBook
{
private:
	Contact contacts[8];
	int contactCount;
	int oldestContact;

public:
	PhoneBook();
	void addContact();
	void searchContacts() const;
	void displayContactList() const;
	void displayContactDetails(int index) const;
};

#endif