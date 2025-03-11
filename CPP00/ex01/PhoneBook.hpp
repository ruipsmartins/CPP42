/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:29:23 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 14:54:30 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "includes.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
		int	total_contacts;

    public:
        PhoneBook(void);
        //~PhoneBook();
        void ADDContact(void);
        void SEARCHContacts(void) const;
};



#endif