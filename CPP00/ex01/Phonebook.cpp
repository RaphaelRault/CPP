/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:01:27 by rrault            #+#    #+#             */
/*   Updated: 2024/03/22 17:19:32 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string get_formatted_field(const std::string& field)
{
	if (field.length() > 10)
		return (field.substr(0,9) + ".");
	return (field);
}

void	display_content_info(Contact contact)
{
	std::cout << std::endl;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

PhoneBook::PhoneBook() : count(0), max(0){};

void	PhoneBook::addContact(void)
{
	Contact		new_contact;
	std::string	input;

	std::cout << "First name: ";
	getline(std::cin, input);
	new_contact.setFirstName(input);
	std::cout << "Last name: ";
	getline(std::cin, input);
	new_contact.setLastName(input);
	std::cout << "Nickname: ";
	getline(std::cin, input);
	new_contact.setNickname(input);
	while (1)
	{
		std::cout << "Phone Number: ";
		getline(std::cin, input);
		if (!input.empty() && input.find_first_not_of("18446744073709551615UL")
		!= std::string::npos)
		{
			std::cin.clear();
			std::cout << "A phone number cannot contain any characters other than number"
				<< std::endl;
			continue ;
		}
		new_contact.setPhoneNumber(input);
		break;
	}
	std::cout << "Darkest secret: ";
	getline(std::cin, input);
	new_contact.setDarkestSecret(input);
	if (new_contact.getFirstName().empty() || 
        new_contact.getLastName().empty() ||
        new_contact.getNickname().empty() ||
        new_contact.getPhoneNumber().empty() ||
        new_contact.getDarkestSecret().empty())
    {
        std::cout << "Error: Please fill in all fields for the contact." << std::endl;
        return;
	}
	if (count > MAX_INDEX)
	{
		this->contacts[max] = new_contact;
		if (max > MAX_INDEX)
			max = 0;
		else
			max++;
	}
	else
	{
		this->count += 1;
		this->contacts[count - 1] = new_contact;
	}
	std::cout << "Friend added successfully!" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	if (count == 0)
	{
		std::cout << "There are no contact to display!" << std::endl;
		return ;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|\n"
		<< std::endl;
	for (size_t i = 0; i < this->count; i += 1)
	{
		std::cout << "|" << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10)
			<< get_formatted_field(contacts[i].getFirstName()) << "|";
		std::cout << std::right << std::setw(10)
			<< get_formatted_field(contacts[i].getLastName()) << "|";
		std::cout << std::right << std::setw(10)
			<< get_formatted_field(contacts[i].getNickname()) << "|\n";
	}
	std::string	index;
	int			conv_index;

	while (1)
	{
		std::cout << "\nPlease insert the index of the contact you wish	to display: ";
		getline(std::cin, index);
		if (!index.empty() && index.find_first_not_of("0123456789")
			== std::string::npos)
		{
			conv_index = atoi(index.c_str());
			if (conv_index <= MAX_INDEX)
				break ;
		}
		std::cin.clear();
		std::cout << "Invalid input" << std::endl;
	}
	if ((size_t)conv_index > (count - 1))
		std::cout << "There's no contact with that index." << std::endl;
	else
		display_content_info(this->contacts[conv_index]);
}