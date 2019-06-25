/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "Box.hpp"
#include <iostream>

Box::Box() : Wrap(BOX)
{
	std::cout << "Box created." << std::endl;
}

Box::~Box()
{
}

void	Box::WrapMeThat(Object *to_wrap)
{
	if (!_isOpen)
		_isOpen = true;
	if (!_object)
		_object = to_wrap;
	std::cout << "tuuuut tuuut tuut" << std::endl;
}