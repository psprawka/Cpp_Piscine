/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:41:23 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 19:58:16 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
	private:
		std::string	const	_target;

		PresidentialPardonForm(void);
	
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		~PresidentialPardonForm(void);
		
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
		std::string		getTarget(void) const;
		void			action(void) const;
};

#endif
