/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/
#ifndef C_POOL_BOX_HPP
#define C_POOL_BOX_HPP

#include "Wrap.hpp"

class	Box : public Wrap
{
	public:
	Box();
	~Box();
	void WrapMeThat(Object *to_wrap);
};

#endif //C_POOL_BOX_HPP
