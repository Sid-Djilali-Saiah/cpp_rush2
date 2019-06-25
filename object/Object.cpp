/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "Object.hpp"
#include "wrap/Wrap.hpp"
#include "wrap/Box.hpp"

Object::Object(e_obj type) : _type(type)
{
}

Object::~Object()
{
}

e_obj Object::getType() const
{
	return _type;
}

void Object::setType(e_obj type)
{
	this->_type = type;
}

bool Object::isToy()
{
	if (_type == LITTLEPONEY || _type == TEDDY)
		return true;
	return false;
}

bool Object::isWrap()
{
	if (_type == BOX || _type == GIFTPAPER)
		return true;
	return false;
}
