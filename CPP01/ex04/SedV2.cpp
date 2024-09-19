/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedV2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:56:44 by rrault            #+#    #+#             */
/*   Updated: 2024/04/05 11:14:15 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedV2.hpp"

SedV2::SedV2(std::string filename) : _inFile(filename)
{
    this->_outFile = this->_inFile + ".replace";
}

SedV2::~SedV2 ( void ) 
{

}

void    SedV2::replace( std::string toFind, std::string replace) 
{
    std::ifstream ifs;

    ifs.open((this->_inFile.c_str()));
    if (ifs.is_open()) 
    {
        std::string content;
        if (std::getline(ifs, content, '\0')) 
        {
            std::ofstream ofs;
            ofs.open(this->_outFile.c_str());
            size_t          pos = content.find(toFind);
            while ( pos != std::string::npos ) 
            {
                content.erase(pos, toFind.length());
                content.insert(pos, replace);
                pos = content.find(toFind);
            }
            ofs << content;
            ofs.close();
        }
        else 
        {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    } 
    else 
    {
        std::cerr << "Unable to open the file." << std::endl;
        exit(EXIT_FAILURE);
    }
}