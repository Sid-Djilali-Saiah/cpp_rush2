/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(std::string title) : Toy(LITTLEPONEY)
{
	std::cout << "Little Poney created." << std::endl;
}

LittlePony::~LittlePony()
{
}

void LittlePony::isTaken()
{
	_isTaken = true;
	std::cout << "yo man" << std::endl;
}

void LittlePony::operator=(LittlePony const &other)
{
	_type = other._type;
	_title = other._title;
	_isTaken = other._isTaken;
}