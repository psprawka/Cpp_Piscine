/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:12 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 22:22:30 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		int					_grade;
		std::string	const	_name;

	public:
		Bureaucrat(void);
		Bureaucrat(int grade, std::string const name);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &obj);
		
		int					getGrade(void) const;
		std::string const	getName(void) const;

		void				setGrade(int grade);
		
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
		
		void				gradeIncrement(void);
		void				gradeDecrement(void);
		void				signForm(Form &obj);
		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);

#endif
