/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:08:19 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 16:40:36 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#define ERROR_MSG_MEMORY_ALLOCATION "\033[31mError: Memory allocation failed.\033[0m"

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string n);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif