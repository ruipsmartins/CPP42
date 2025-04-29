#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>

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