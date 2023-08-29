/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:15:23 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 17:41:50 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
private:
	std::string type;

public:
	Weapon(const std::string &type);
	const std::string &getType() const;
	void setType(const std::string &newType);
};

#endif

// const std::string&:
// 返り値の型としての std::string への参照を表します。
// この const は、返される文字列が変更不可であることを意味します。
// このメソッドを使って返される文字列を変更することはできません。

// const (関数の後ろにあるもの):
// このメンバ関数自体が「const」であることを示します。
// これは、このメソッドがクラスのメンバ変数を変更しないことを意味します。
// つまり、この関数を呼び出しても、それによってオブジェクトの状態が変わることはありません。