/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:56:32 by rrault            #+#    #+#             */
/*   Updated: 2024/04/02 17:02:18 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDV2_HPP
#define SEDV2_HPP

#include <cstdlib>
#include <iostream>
#include <fstream>

class SedV2
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    SedV2( std::string filename);
    ~SedV2();

    void    replace( std::string s1, std::string s2);
};

#endif