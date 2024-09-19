/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:49:57 by rrault            #+#    #+#             */
/*   Updated: 2024/04/11 12:06:38 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <cstdlib>
#include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

    ClapTrap();

public:
    ClapTrap( std::string name );
    ~ClapTrap();

    ClapTrap(const ClapTrap &);
    ClapTrap&       operator=(const ClapTrap& rhs);

    void            attack(std::string const& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);

};

#endif