/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:04:32 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/30 23:18:32 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

int			MateriaSource::_materias_nb = 0;

		
void		MateriaSource::learnMateria(AMateria *obj)
{
	if (this->_materias_nb > 3)
		return ;
	
	this->_materias[this->_materias_nb++] = obj;
}


AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for	(int i = 0; i < this->_materias_nb; i++)
	{
		if (type == this->_materias[i]->getType())
			return (this->_materias[i]->clone());
	}
	return (0);
}
