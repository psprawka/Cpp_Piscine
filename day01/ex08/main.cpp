/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 00:23:42 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/27 01:24:03 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

int main(void)
{
	Human bobo;

	bobo.action("meleeAttack", "BoboTheTarget");
	bobo.action("fakeFunction", "BoboIsNotATarget");
	bobo.action("", "Bobo");
	bobo.action("rangedAttack", "SmallBobo");
	bobo.action("intimidatingShout", "\"Afraid Bobo But Not A Target\"");
	bobo.action("rangedAttack", "BigBobo");
	return (0);
}
