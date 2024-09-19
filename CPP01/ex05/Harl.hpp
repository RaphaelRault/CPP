/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:59:07 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 18:00:01 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class   Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );


public:
    Harl();
    ~Harl();

    void        complain( std:: string level );

};

typedef void (Harl::*t_func) ( void );