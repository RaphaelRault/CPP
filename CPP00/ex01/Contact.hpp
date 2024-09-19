/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:19:00 by rrault            #+#    #+#             */
/*   Updated: 2024/03/22 17:19:39 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <stdio.h>

class Contact
{
	public:
		void	setFirstName(std::string str) {(this->first_name = str);}
		void	setLastName(std::string str) {(this->last_name = str);}
		void	setNickname(std::string str) {(this->nickname = str);}
		void	setPhoneNumber(std::string str) {(this->phone_number = str);}
		void	setDarkestSecret(std::string str) {(this->darkest_secret = str);}

		const std::string&	getFirstName(void) const {return(this->first_name);}
		const std::string&	getLastName(void) const {return(this->last_name);}
		const std::string&	getNickname(void) const {return(this->nickname);}
		const std::string&	getPhoneNumber(void) const {return(this->phone_number);}
		const std::string&	getDarkestSecret(void) const {return(this->darkest_secret);}
	
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif