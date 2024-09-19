/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:09:23 by rrault            #+#    #+#             */
/*   Updated: 2024/05/28 12:16:18 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain   *_brain;

public:
    Cat( void );
    ~Cat( void );

    Cat( const Cat& src );
    Cat& operator=( const Cat& src );

    void   makeSound( void ) const;
};

#endif // CAT_HPP