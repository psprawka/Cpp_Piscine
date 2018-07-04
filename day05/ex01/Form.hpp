/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 14:10:41 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 22:24:20 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		Form(void);
		bool				_is_signed;
		std::string	const	_name;
		int	const			_sgrade;
		int	const			_egrade;
		

	public:
		Form(Form const &obj);
		Form(std::string name, int sgrade, int egrade);
		~Form(void);

		Form &operator=(Form const &obj);

		int					getSgrade(void) const;
		int					getEgrade(void) const;
		std::string const	getName(void) const;
		bool				getIsSigned(void) const;

		class	GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const &);
				~GradeTooLowException(void) throw();
				GradeTooLowException &operator=(GradeTooLowException const &);
				virtual const char	*what() const throw();
		};

		class	GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const &);
				~GradeTooHighException(void) throw();
				GradeTooHighException &operator=(GradeTooHighException const &);
				virtual const char	*what() const throw();
		};

		std::string		beSigned(Bureaucrat &obj);
		
};

std::ostream &operator<<(std::ostream &os, Form const &obj);

#endif