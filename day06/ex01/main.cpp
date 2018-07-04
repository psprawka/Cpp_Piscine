/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:35:54 by psprawka          #+#    #+#             */
/*   Updated: 2018/07/03 21:47:37 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define ALPHANUM "QWERTYUIOPLKJHGFDSAZXCVBNMqwertyuioplkjhgfdsazxcvbnm1234567890"

struct	MyData { char array[8]; int n; char array2[8]; };
struct	Data { std::string s1; int n; std::string s2; };

void	*serialize(void)
{
	MyData	*data = new MyData;
	int		len = std::strlen(ALPHANUM);
	
	for (int i = 0; i < 8; i++)
	{
		data->array[i] = ALPHANUM[std::rand() % len];
		data->array2[i] = ALPHANUM[std::rand() % len];
	}
	
	data->n = std::rand();
	return (static_cast<void *>(data));
}

Data	*deserialize(void *raw)
{
	Data	*new_data = new Data;

	new_data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	new_data->n = *reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 8);
	new_data->s2 = std::string(reinterpret_cast<char *>(raw) + sizeof(int) + 8, 8);
	return (new_data);
}


int		main(void)
{
	std::srand(time(0));

	Data	*obj = deserialize(serialize());
	
	std::cout << "Data after:" << std::endl;
	std::cout << "array1: [" << obj->s1 << "]\n";
	std::cout << "number: [" << obj->n << "]\n";
	std::cout << "array2: [" << obj->s2 << "]\n" << std::endl;
}
