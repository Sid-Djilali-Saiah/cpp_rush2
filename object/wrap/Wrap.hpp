/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: pierre.narcisi@epitech.eu
** Created by Pierre Narcisi,
*/

#ifndef WRAP_HPP
#define WRAP_HPP

#include "../Object.hpp"

class Wrap : public Object
{
public:
	~Wrap();
	Wrap(e_obj type);
	void openMe();
	void closeMe();
	Object *getObject();

	virtual void WrapMeThat(Object *to_wrap);

protected:
	bool _isOpen;
	Object *_object;
};

#endif
