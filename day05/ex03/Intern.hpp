/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:34:08 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 21:00:01 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &obj);
		Intern &operator=(Intern const &obj); 
		~Intern(void);
		
		Form	*makeForm(std::string form_name, std::string target);
};

#endif 
