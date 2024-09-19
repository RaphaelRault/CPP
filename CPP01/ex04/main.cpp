/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:48:41 by rrault            #+#    #+#             */
/*   Updated: 2024/04/04 15:42:24 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

int main ( int ac, char **av )
{
    std::ifstream test;
    if (ac != 4) 
    {
        std::cerr << "Usage: ./SedV2 <filename> <to_find> <replace>." << std::endl;
        return EXIT_FAILURE;
    } 
    else 
    {
        test.open(av[1]);
        if (!test.is_open())
        {
            std::cerr << "Unable to open the file." << std::endl;
            return EXIT_FAILURE;
        }
        SedV2   sed2(av[1]);
        sed2.replace(av[2], av[3]);
    }
    return EXIT_SUCCESS;
}