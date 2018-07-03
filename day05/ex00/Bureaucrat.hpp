/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:28:12 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/02 16:07:01 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
		void				setName(std::string const name);
		void				gradeIncrement(void);
		void				gradeDecrement(void);
		
		class	GradeTooLowException : public std::exception {
			virtual const char	*what() const throw();
		};

		class	GradeTooHighException : public std::exception {
			virtual const char	*what() const throw();
		};
		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);

#endif
