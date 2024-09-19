/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:17:26 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 14:45:57 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) 
{
 
}

Zombie::~Zombie( void ) 
{
    std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
}

void    Zombie::announce( void ) 
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name ) 
{
    this->_name = name;
}