/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:52:35 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 19:13:24 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <fstream>
#include <sstream>

FileHandler::FileHandler(const std::string &filename) : filename(filename) {}

std::string FileHandler::readContent()
{
	std::ifstream inputFile(filename);
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	return (buffer.str());
}

bool FileHandler::writeContent(const std::string &content)
{
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open())
	{
		return (false);
	}
	outputFile << content;
	return (true);
}

// std::ifstream は、ファイルからの入力のためのストリームです。
// ここで、filename というメンバ変数（クラス内で以前に定義されている）を使用して、指定されたファイルを開きます。

// inputFile.rdbuf() は、ファイルから読み取った内容（バッファ）を返します。
// これを buffer にストリーム操作で挿入します。これにより、ファイルの内容が buffer にコピーされます。

// std::ofstream は、ファイルへの出力のためのストリームです。
// ここで、filename を使用して、指定されたファイルに書き込むためのファイルを開きます。