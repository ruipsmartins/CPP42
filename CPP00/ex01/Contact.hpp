/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruidos-s <ruidos-s@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 10:48:49 by ruidos-s          #+#    #+#             */
/*   Updated: 2025/03/11 14:22:35 by ruidos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "includes.hpp"

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    void setContact();
    void displayContact() const;
	std::string getFirstName() const { return first_name; }
    std::string getLastName() const { return last_name; }
    std::string getNickname() const { return nickname; }
};


#endif