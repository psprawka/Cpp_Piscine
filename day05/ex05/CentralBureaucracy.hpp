/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 22:25:47 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 23:25:04 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"
#include <iostream>

class CentralBureaucracy
{
	private:
		OfficeBlock		_blocks[20];
		std::string		_target[20];
		static int		_nb_targets;
		static int		_nb_signers;
		static int		_nb_executers;
		CentralBureaucracy(CentralBureaucracy const &obj);
		
	public:
		CentralBureaucracy(void);
		~CentralBureaucracy(void);

		CentralBureaucracy &operator=(CentralBureaucracy const &obj);

		void	feedSigner(Bureaucrat &obj);
		void	feedExecuter(Bureaucrat &obj);
		void	doBureaucracy(void);
		void	queueUp(std::string target);
};

#endif
