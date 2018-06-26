/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 11:20:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/25 16:39:46 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_PHONEBOOK_HPP
# define CLASS_PHONEBOOK_HPP

#include "header.hpp"

class ClassPhonebook
{
	private:
		ClassContact	contacts[8];
		short			contacts_nb;
	
	public:
		void	add(void);
		void	search(void);
		ClassPhonebook();	//do i need it here?
		~ClassPhonebook();	//do i need it here?
};


#endif 