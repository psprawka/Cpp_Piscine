/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 09:08:14 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 11:21:02 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

# define PINK			"\033[38;5;200m"
# define ORANGE			"\033[38;5;208m"

void	ponyOnTheHeap(void)
{
	ClassPony *pony = new ClassPony;

	pony->color = PINK;
	pony->display_pony();
	std::cout << std::endl;
	delete pony;
}

void	ponyOnTheStack(void)
{
	ClassPony pony;

	pony.color = ORANGE;
	pony.display_pony();
	std::cout << std::endl;
}

int		main(void)
{
	std::cout << std::endl;
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
