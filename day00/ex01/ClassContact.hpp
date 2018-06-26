/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 10:02:51 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/25 16:40:01 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

#include "header.hpp"

class ClassContact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		long long 	phone_number;
		std::tm		birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

	public:
		void 	add_contact(void);
		void 	display_contact(void);
		void 	display_contact_details(void);
};



//	todo
//	-> sprawdz co dokladnie oznacza std 

#endif 
