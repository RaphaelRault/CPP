/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:35:21 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 14:43:56 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) 
{
    Zombie *zombiz = new Zombie[N];
    for (int i = 0; i < N; i++) 
    {
        zombiz[i].setName(name);
    }
    return zombiz;
}