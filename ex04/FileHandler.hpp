/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:49:16 by khorike           #+#    #+#             */
/*   Updated: 2023/08/29 19:07:23 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <string>

class FileHandler {
private:
	std::string filename;

public:
	FileHandler(const std::string &filename);
	std::string readContent();
	bool writeContent(const std::string &content);
};

#endif