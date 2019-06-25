/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string title) : Toy(TEDDY)
{
	_title = title;
	std::cout << "Teddy created." << std::endl;
}

Teddy::~Teddy()
{

}

void Teddy::isTaken()
{
	_isTaken = true;
	std::cout << "gra hu" << std::endl;
}

void Teddy::operator=(Teddy const &other)
{
	_type = other._type;
	_title = other._title;
	_isTaken = other._isTaken;
}