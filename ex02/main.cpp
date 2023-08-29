/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:43:28 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 17:08:31 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Address of brain: " << &brain << std::endl;
	std::cout << "Address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of brain: " << brain << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF: " << stringREF << std::endl;
}

// 復習 std::string *stringPTR の時
// *stringPTR は　中身
// stringPTR は　ポインタがさすアドレス
// &stringPTR は　ポインタ自身のアドレス

// 参照とポインタの違い

// 読みやすさ: 参照を使用すると、コードがシンプルで読みやすくなります。
// 特に、アドレス取得やデリファレンスなどの操作を行う必要がないので、コードの可読性が向上します。

// 保守性: 参照は一度初期化されると再代入できないので、意図しないオブジェクトの変更やバグのリスクが低減します。
// また、NULL参照のリスクがないため、安全性も向上します。

// #include <iostream>

// int main() {
//     int a = 10;
//     int b = 20;
    
//     int& ref = a;  // refはaへの参照

//     std::cout << ref << std::endl;  // 10 が出力される

//     ref = b;  // これはref（つまりa）の内容をbの内容で上書きすることを意味する
//     std::cout << a << std::endl;  // 20 が出力される

//     // ref = &b;  // これはエラー。refをbへの参照に再代入しようとしているが、参照の再代入はできない
// 	// ref = &a; もちろんこれも無理

//     return 0;
// }
