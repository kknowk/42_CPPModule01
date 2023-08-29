/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:17:47 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 16:40:42 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string n) : name(n) {}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed for debugging purposes." << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//関係ないけど、海外のゾンビは 「脳が食いたいよおおおお」っていうらしい