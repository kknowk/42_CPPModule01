/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:32:56 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 19:15:30 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FileHandler.hpp"
#include "StringReplacer.hpp"

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cerr << "\033[31m" << "Usage: " << argv[0] 
			<< " <filename> <s1> <s2>" << "\033[0m" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	FileHandler fileHandler(filename);
	std::string content = fileHandler.readContent();

	content = StringReplacer::replaceAll(content, s1, s2);

	if (!fileHandler.writeContent(content))
	{
		std::cerr << "\033[31m" << "Error writing to output file." << "\033[0m" << std::endl;
		return (1);
	}
	return (0);
}
