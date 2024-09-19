/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:09:29 by rrault            #+#    #+#             */
/*   Updated: 2024/05/28 12:16:52 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain   *_brain;

public:
    Dog( void );
    ~Dog( void );

    Dog( const Dog& src );
    Dog& operator=( const Dog& src );

    void   makeSound( void ) const;
};

#endif // DOG_HPP