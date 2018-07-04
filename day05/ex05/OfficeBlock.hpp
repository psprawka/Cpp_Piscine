/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:34:00 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 12:27:39 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

class OfficeBlock
{
	private:
		Intern		*_intern;
		Bureaucrat	*_signer;
		Bureaucrat	*_executer;
	
		OfficeBlock(OfficeBlock const &);
		OfficeBlock &operator=(OfficeBlock const &);

	public:
		OfficeBlock(void);
		OfficeBlock(Intern &intern, Bureaucrat &signer, Bureaucrat &executer);
		~OfficeBlock(void);

		Intern			*getIntern(void) const;
		Bureaucrat		*getSigner(void) const;
		Bureaucrat		*getExecutor(void) const;
		
		void	setIntern(Intern &intern);
		void	setSigner(Bureaucrat &signer);
		void	setExecutor(Bureaucrat &executer);
		
		void	doBureaucracy(std::string form, std::string target);
	
};

#endif 
