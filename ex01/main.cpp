/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:52:10 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 14:34:09 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	int N = 5;
	Zombie *myHorde = zombieHorde(N,"Walker");

	for(int i = 0; i < N; ++i)
	{
		myHorde[i].announce();
	}
	operator delete[](myHorde);
	return (0);
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q ex01");
// }
