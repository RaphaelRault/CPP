/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:10:46 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 16:42:51 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon;

public:
    HumanA( std::string name, Weapon& weapon );
    ~HumanA();

    void    attack( void ) const;
};