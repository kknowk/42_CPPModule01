/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:34:12 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 12:51:50 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie	*newZombie(std::string name)
{
	Zombie *z = new(std::nothrow) Zombie(name);
	if (!z)
	{
		std::cerr << ERROR_MSG_MEMORY_ALLOCATION << std::endl;
		exit(1);
	}
	return (z);
}

// nothrow 何も投げないよモード。詳しくは次のex00で
