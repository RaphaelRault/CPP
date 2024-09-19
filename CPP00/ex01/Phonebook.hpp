/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrault <rrault@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:04:53 by rrault            #+#    #+#             */
/*   Updated: 2024/03/22 12:06:12 by rrault           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

# include "Contact.hpp"

# define MAX_CONTACT 8
# define MAX_INDEX 7

class PhoneBook
{
	public:
		PhoneBook();
		void	addContact(void);
		void	searchContact(void);
	
	private:
		size_t count;
		size_t max;
		Contact contacts[MAX_CONTACT];
};

#endif