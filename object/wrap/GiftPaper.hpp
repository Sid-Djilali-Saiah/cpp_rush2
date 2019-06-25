/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: pierre.narcisi@epitech.eu
** Created by Pierre Narcisi,
*/

#ifndef GIFTPAPER_HPP
#define GIFTPAPER_HPP

#include "Wrap.hpp"

class GiftPaper : public Wrap {

	public:
		GiftPaper();
		~GiftPaper();
	void WrapMeThat(Object *to_wrap) final;
};

#endif
