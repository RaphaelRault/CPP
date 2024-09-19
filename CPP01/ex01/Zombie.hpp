/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:44:14 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 14:39:25 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void    announce( void );
    Zombie* newZombie( std::string name );
    void    setName( std::string name );

};

Zombie*    zombieHorde( int N, std::string name );

#endif