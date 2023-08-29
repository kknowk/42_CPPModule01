/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:33:06 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 17:46:15 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	const Weapon &weapon;

public:
	HumanA(const std::string &name, const Weapon &weapon);
	void attack() const;
};

#endif

// const Weapon &weaponでweaponを受け取る