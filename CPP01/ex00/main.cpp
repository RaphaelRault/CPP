/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:59:34 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 14:10:54 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie = newZombie("Roget Zombie");


	randomChump("Random Chump Zombie");
	delete heap_zombie;
	return (0);
}