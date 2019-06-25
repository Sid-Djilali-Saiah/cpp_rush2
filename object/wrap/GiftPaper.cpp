/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: pierre.narcisi@epitech.eu
** Created by Pierre Narcisi,
*/

#include "GiftPaper.hpp"

GiftPaper::~GiftPaper()
{
}

GiftPaper::GiftPaper() : Wrap(GIFTPAPER)
{
	std::cout << "GiftPaper created." << std::endl;
}

void GiftPaper::WrapMeThat(Object *to_wrap)
{
	if (!_object)
		_object = to_wrap;
	std::cout << "tuuuut tuuut tuut" << std::endl;
}
