/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 08:57:22 by psprawka          #+#    #+#             */
/*   Updated: 2018/06/26 11:16:14 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

# define NORMAL			"\x1B[0m"

void	ClassPony::display_pony(void)
{
	std::cout << color;
	std::cout << "Y8baadP\"\"\"\"\"\"\"\"Yba,_      " << std::endl;
	std::cout << "aaadP\"\'             `\"\"Yb,   " << std::endl;
	std::cout << "`Y8(                    `\"Yb," << std::endl;
	std::cout << "  `Y,                      `Yba," << std::endl;
	std::cout << "    Y,  (O)                   `Yba," << std::endl;
	std::cout << "    `Y,                          \"\"Yba,________,,aaddddbbbaa,,____,aa,_" << std::endl;
	std::cout << "     `Y,       ,aa                   `\"\"\"\"\"\"\"\"\"\"\'\'          ``\"\"\"\"\'\'  \"Y," << std::endl;
	std::cout << "       Y,      d\'8                                                \"Ya   `Y," << std::endl;
	std::cout << "       `b      8 8                                                  `Y,   Y," << std::endl;
	std::cout << "        Ya o  ,8 8                                                    b   `b" << std::endl;
	std::cout << "         Yb,_,dP 8                                                    Y    8" << std::endl;
	std::cout << "          `\"\"\"\"  Y                                                    8    8" << std::endl;
	std::cout << "                 I,                                                   8    8" << std::endl;
	std::cout << "                 `b                                                   P    [" << std::endl;
	std::cout << "                  `b                                                 d\'    [" << std::endl;
	std::cout << "                   d                                                ,P     [" << std::endl;
	std::cout << "                 ,d\'    ,PY,         ,P\"YaaaaaaP\"Ybaaa,,_           d\'     [" << std::endl;
	std::cout << "                d\"    ,P\"  Y,        d\'           8'  `\"\"db,       d\'      8" << std::endl;
	std::cout << "               d'   ,P\"    `Y,       8            I,     d\'\"b,     8a      P" << std::endl;
	std::cout << "              d(    (       `Y,      P            `b    ,P  `Y,    8`Ya___d\'" << std::endl;
	std::cout << "              \"Y,   \"b,      `Y,    ,I             8    d\'   `8    8  `\"\"\"\'" << std::endl;
	std::cout << "                \"Y,   \"b,  __ `8,   d\'            ,8   ,P     8    8" << std::endl;
	std::cout << "                  \"Y,   \"bd88b `b   8             I\'   d\'     Y,   8" << std::endl;
	std::cout << "                    \"Y,    888b 8   8             8   ,P      `b   8" << std::endl;
	std::cout << "                      \"Ya,,d888b8   P            d\'  ,P\'       8   Y," << std::endl;
	std::cout << "                         `\"\"\"\",d\"  ,I        ,adPb__aP\'        Y   `b" << std::endl;
	std::cout << "                           ,a8P,__aP\'       d888888P\'         ,d    8" << std::endl;
	std::cout << "                          d8888888`         88888888       ,d888bbaaP" << std::endl;
	std::cout << "                          88888888                         88888888\'" << std::endl;
	std::cout << NORMAL;
}
