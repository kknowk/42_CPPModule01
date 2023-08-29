/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:56:32 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 19:06:56 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGREPLACER_HPP
#define STRINGREPLACER_HPP

#include <string>

class StringReplacer {
public:
	static std::string replaceAll(const std::string& source,
		const std::string& from, const std::string& to);
};

#endif