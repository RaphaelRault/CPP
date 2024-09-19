/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:59:34 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 14:43:36 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 3

int main( void ) 
{
    Zombie *zombiz = zombieHorde(N, "zombi");

    for (size_t i = 0; i < N; i++) 
	{
        zombiz[i].announce();
    }

    delete [] zombiz;
    return 0;
}