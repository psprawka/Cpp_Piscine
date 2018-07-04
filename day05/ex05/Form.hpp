/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 14:10:41 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 23:22:31 by psprawka         ###   ########.fr       */
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

		class	AlreadySigned : public std::exception {
			public:
				AlreadySigned(void);
				AlreadySigned(AlreadySigned const &);
				~AlreadySigned(void) throw();
				AlreadySigned &operator=(AlreadySigned const &);
				virtual const char	*what() const throw();
		};

		class	NotSigned : public std::exception {
			public:
				NotSigned(void);
				NotSigned(NotSigned const &);
				~NotSigned(void) throw();
				NotSigned &operator=(NotSigned const &);
				virtual const char	*what() const throw();
		};

		std::string		beSigned(Bureaucrat &obj);
		virtual void	action(void) const = 0;
		bool			execute(Bureaucrat const &executor) const;
		
};

std::ostream &operator<<(std::ostream &os, Form const &obj);

#endif