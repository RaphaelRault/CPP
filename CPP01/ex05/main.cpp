/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:40:57 by rrault            #+#    #+#             */
/*   Updated: 2024/04/05 15:37:03 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) 
{

    std::string input;
    Harl        harl;

    while (input.compare("exit"))
    {
        std::cout << "Choose a level: DEBUG, INFO, WARNING, ERROR." << std::endl;
        std::getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cerr << "^D" << std::endl;
			exit(EXIT_FAILURE);
		}
        harl.complain(input);
    }
    return EXIT_SUCCESS;
}
