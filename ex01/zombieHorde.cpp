/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:05:46 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 16:41:20 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie* horde = nullptr;
    try
    {
        void* rawMemory = operator new[](N * sizeof(Zombie));

        horde = static_cast<Zombie*>(rawMemory);
        for (int i = 0; i < N; ++i)
        {
            new (&horde[i]) Zombie(name);
        }
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
    return horde;
}

// newがメモリ確保に失敗すると、std::bad_alloc例外をスローします。
// この例外をキャッチして適切に処理することができます。
// new (&horde[i]) Zombie(name); でも
// horde[i] = Zombie(name);でもどっちでもよき


// プレースメントnew:
// プレースメントnewは、既存のメモリ領域内でオブジェクトを構築するためのものです。
// つまり、既に確保されたメモリ領域内にオブジェクトを新しく配置する際に使用します。
// プレースメントnewを使用することで、オブジェクトの構築を管理することができます。
// これは、特定のアルゴリズムや制約がある場合に役立ちます。