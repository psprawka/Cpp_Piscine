/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:04:28 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 22:45:16 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[4];
		static int	_materias_nb;
		
	public:
		~MateriaSource(void) {};
		
		void		learnMateria(AMateria *obj);
		AMateria	*createMateria(std::string const & type);
};

#endif
