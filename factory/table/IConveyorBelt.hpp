/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_ICONVEYORBELT_HPP
#define CPP_RUSH2_ICONVEYORBELT_HPP

#include "../../object/Object.hpp"

class IConveyorBelt
{
	protected:
	bool _isEmpty;

	public:
	Object *_object;
	IConveyorBelt();
	virtual ~IConveyorBelt();
	virtual Object *takeObject() = 0;
	virtual bool putObject(Object *object) = 0;
	virtual void IN() = 0;
	virtual void OUT() = 0;
	virtual bool isEmpty() = 0;
};

#endif //CPP_RUSH2_ICONVEYORBELT_HPP
