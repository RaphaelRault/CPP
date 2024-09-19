/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:48:15 by rrault            #+#    #+#             */
/*   Updated: 2024/03/18 10:48:33 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void print_welcome(void)
{
    std::cout << "*-------------------------------------------*\n"
            "|                                           |\n"
            "|              📞  My Super                 |\n"
            "|                  Phone                    |\n"  
            "|                   Book  📖                |\n"
            "|                                           |\n"
            "|          ADD - Add a new contact          |\n"
            "|          SEARCH - Display a contact       |\n"
            "|          EXIT - Exit PhoneBook            |\n"
            "|                                           |\n"
            "*-------------------------------------------*" << std::endl;
}


bool	is_input_valid(const std::string& input)
{
	return (input == "ADD" || input == "SEARCH"
		|| input == "EXIT");
}

std::string get_input(void)
{
	std::string	input;

	while (1)
	{
		std::cout << "pb> ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cin.clear();
			clearerr(stdin);
		}
		if (!input.empty() && is_input_valid(input))
			break;
		std::cin.clear();
		std::cout << "Please enter a valid input!" << std::endl;
	}
	return (input);
}

int	main(void)
{
	PhoneBook	pb;
	std::string	input;

	print_welcome();
	while (1)
	{
		input = get_input();
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.searchContact();
		else
		{
			std::cout << "What ? No friend to call?" << std::endl;
			return (EXIT_SUCCESS);
		}
	}
	return (EXIT_SUCCESS);
}
