/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:56:54 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 18:59:15 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"

std::string StringReplacer::replaceAll(const std::string& source,
	const std::string& from, const std::string& to)
{
	std::string result = source;
	size_t pos = 0;
	while ((pos = result.find(from, pos)) != std::string::npos)
	{
		result.erase(pos, from.length());
		result.insert(pos, to);
		pos += to.length();
	}
	return (result);
}
