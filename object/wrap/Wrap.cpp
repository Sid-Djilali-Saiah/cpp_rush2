/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: pierre.narcisi@epitech.eu
** Created by Pierre Narcisi,
*/

#include "Wrap.hpp"

void Wrap::openMe()
{
	_isOpen = true;
}

Object *Wrap::getObject()
{
	return _object;
}

void Wrap::closeMe()
{
	_isOpen = false;
}

void Wrap::WrapMeThat(Object *to_wrap)
{
	if (!_object) {
		_object = to_wrap;
	}
	std::cout << "tuuuut tuuut tuut" << std::endl;
}

Wrap::~Wrap()
{
}

Wrap::Wrap(e_obj type) : Object(type)
{
	_isOpen = true;
	_object = NULL;
}
