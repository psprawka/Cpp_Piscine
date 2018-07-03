/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 14:10:41 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 20:29:45 by psprawka         ###   ########.fr       */
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
			virtual const char	*what() const throw();
		};

		class	GradeTooHighException : public std::exception {
			virtual const char	*what() const throw();
		};

		class	AlreadySigned : public std::exception {
			virtual const char	*what() const throw();
		};

		class	NotSigned : public std::exception {
			virtual const char	*what() const throw();
		};

		std::string		beSigned(Bureaucrat &obj);
		virtual void	action(void) const = 0;
		bool			execute(Bureaucrat const &executor) const;
		
};

std::ostream &operator<<(std::ostream &os, Form const &obj);

#endif