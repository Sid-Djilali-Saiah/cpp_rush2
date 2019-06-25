/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef C_POOL_OBJECT_HPP
#define C_POOL_OBJECT_HPP

#include <iostream>
#include <string>

typedef enum
{
	UNKNOWN,
	LITTLEPONEY,
	TEDDY,
	BOX,
	GIFTPAPER,
}	e_obj;

class	Object
{
	protected:
	e_obj	_type;

	public:
	explicit Object(e_obj = UNKNOWN);
	~Object();

	virtual e_obj getType() const;

	bool isToy();
	bool isWrap();
	void setType(e_obj type);
};

#endif //C_POOL_OBJECT_HPP
