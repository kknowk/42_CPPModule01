/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:41:51 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 14:38:24 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *z1 = newZombie("Foo");
	z1->announce();
	
	randomChump("Bar");
	delete z1;
	return (0);
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q ex00");
// }
