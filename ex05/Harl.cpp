/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:41:58 by khorike           #+#    #+#             */
/*   Updated: 2023/08/30 13:06:57 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	levelToFunction["DEBUG"] = &Harl::debug;
	levelToFunction["INFO"] = &Harl::info;
	levelToFunction["WARNING"] = &Harl::warning;
	levelToFunction["ERROR"] = &Harl::error;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string &level)
{
	if (levelToFunction.find(level) == levelToFunction.end())
	{
		std::cerr << "\033[31m" << "Invalid level: " << level << "\033[0m" << std::endl;
		return ;
	}
	void (Harl::*func)() = levelToFunction[level];
	(this->*func)();
}

// levelToFunction.find(level) == levelToFunction.end()
// key がない時のエラハン

// void (Harl::*func)() =  levelToFunction[level];
// みたいになぜメンバ関数へのポインタを使うのか
// if-elseやswitch文を使う必要が出てくる

// std::string level = "DEBUG";
// if (level == "DEBUG") {
//     debug();
// } else if (level == "INFO") {
//     info();
// } ... といった具体的な関数呼び出し

// 関数ポインタを使うと

// std::string level = "DEBUG";
// void (Harl::*func)() = levelToFunction[level];
// (this->*func)();

// コードの拡張性や可読性を向上させられる！