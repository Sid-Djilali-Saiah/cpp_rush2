/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "Santa.hpp"

void Santa::action(std::string content)
{
	if (content == "GiftPaper" || content == "Box") {
		std::cout << "whistles while working" << std::endl;
	}
	if (content == "/GiftPaper" || content == "/Box") {
		std::cout << "tuuuut tuuut tuut" << std::endl;
	}
	if (content == "Teddy")
		std::cout << "yo man" << std::endl;
	if (content == "LittlePoney")
		std::cout << "gra hu" << std::endl;
}

void Santa::pars()
{
	std::string line;
	std::string result = "";

	if (!_infile.good()) {
		std::cerr << "File is unreadable" << std::endl;
		return;
	}
	while (getline(_infile, line)) {
		result += line;
	}
	while (result != "") {
		std::string content = result.substr(0, result.find(">"));
		content = content.erase(0, 1);
		result = result.erase(0, content.size() + 2);
		action(content);
	}
	_infile.close();
}

Santa::Santa(std::string name):
_infile(name)
{
}
