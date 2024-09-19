/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:13:32 by rrault            #+#    #+#             */
/*   Updated: 2024/04/08 15:48:04 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon)
{
        if (this->_weapon.getType() == "")
                this->_weapon.setType("Default Weapon");
}

HumanA::~HumanA()
{
    
}

void    HumanA::attack( void ) const 
{
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}