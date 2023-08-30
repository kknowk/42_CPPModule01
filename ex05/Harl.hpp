/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:38:16 by khorike           #+#    #+#             */
/*   Updated: 2023/08/30 12:49:46 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>

class Harl {
public:
	Harl();
	void complain(const std::string &level);

private:
	void debug();
	void info();
	void warning();
	void error();

	typedef void (Harl::*memberFunctionPointer)();
	std::map<std::string, memberFunctionPointer> levelToFunction;
};
