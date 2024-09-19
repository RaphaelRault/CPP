/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:44:14 by rrault            #+#    #+#             */
/*   Updated: 2024/03/28 15:22:26 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		const std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie();
		void	announce( void ) const;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif