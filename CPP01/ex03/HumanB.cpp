/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:14:15 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 16:42:47 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) 
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{

}

void    HumanB::setWeapon( Weapon& weapon ) 
{
    this->_weapon = &weapon;
}

void    HumanB::attack( void ) const 
{
    if (this->_weapon != NULL && this->_weapon->getType() != "") 
    {
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    } 
    else 
    {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}