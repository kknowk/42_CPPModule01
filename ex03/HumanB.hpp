/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:47:04 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 18:12:53 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon);
	void attack() const;
};

#endif