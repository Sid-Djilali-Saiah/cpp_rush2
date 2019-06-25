/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "Toy.hpp"

Toy::Toy(e_obj type)
{
	_type = type;
}

Toy::~Toy()
{
}

bool Toy::getIsTaken()
{
	std::cout << "Class Toy Taken: " << _isTaken << std::endl;
	return _isTaken;
}

std::string Toy::getTitle() const
{
	return _title;
}

void Toy::operator=(Toy &other)
{
	_type = other._type;
	_title = other._title;
	_isTaken = other._isTaken;
}

std::ostream &operator<<(std::ostream &os, Toy &toy)
{
	return os << "Toy is a " << toy.getType() << " named " <<
		toy.getTitle() << "." << std::endl;
}