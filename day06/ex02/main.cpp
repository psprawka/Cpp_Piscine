/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:36:12 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/04 11:25:31 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};



Base	*generate(void)
{
	int random = std::rand() % 3;

	if (random == 0)
	{
		std::cout << "OBJ CLASS: A" << std::endl;
		return (new A);
	}
	if (random == 1)
	{
		std::cout << "OBJ CLASS: B" << std::endl;
		return (new B);
	}
	if (random == 2)
	{
		std::cout << "OBJ CLASS: C" << std::endl;
		return (new C);
	}
	return (NULL);
}

void	identify_from_pointer(Base *p)
{
	if (p == dynamic_cast<A*>(p))
		std::cout << "1. Object is from A class." << std::endl;
	else if (p == dynamic_cast<B*>(p))
		std::cout << "1. Object is from B class." << std::endl;
	else if (p == dynamic_cast<C*>(p))
		std::cout << "1. Object is from C class." << std::endl;
	else
		std::cout << "No known object." << std::endl;  
}

void	identify_from_reference(Base &p)
{
	if (&p == dynamic_cast<A*>(&p))
		std::cout << "2. Object is from A class." << std::endl;
	else if (&p == dynamic_cast<B*>(&p))
		std::cout << "2. Object is from B class." << std::endl;
	else if (&p == dynamic_cast<C*>(&p))
		std::cout << "2. Object is from C class." << std::endl;
	else
		std::cout << "No known object." << std::endl;  
}

int main(void)
{
	
	std::srand(time(NULL));
	
	Base *test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;
	
	test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;

	test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;

	test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;

	test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;

	test = generate();
	identify_from_pointer(test);
	identify_from_reference(*test);
	std::cout << std::endl;

	return (0);
}
