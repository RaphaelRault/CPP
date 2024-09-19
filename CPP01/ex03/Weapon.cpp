/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:08:10 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 16:21:57 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) 
{
    this->setType(type);
}

Weapon::~Weapon() 
{

}

const   std::string& Weapon::getType( void ) 
{
    return this->type;
}

void    Weapon::setType( std::string newType ) 
{
    this->type = newType;
}