/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:37:57 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 17:40:52 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

const	std::string &Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(const std::string& newType)
{
	type = newType;
}
