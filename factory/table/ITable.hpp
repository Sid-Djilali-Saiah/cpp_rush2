/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_ITABLE_HPP
#define CPP_RUSH2_ITABLE_HPP

#define MAX_OBJ 10

#include "../../object/Object.hpp"

class ITable {

	protected:
	std::size_t 	_nbObj;
	Object 		**_objects;

	public:
	ITable();
	virtual ~ITable();
	virtual Object *takeObject() = 0;
	virtual Object *putObject() = 0;
	virtual std::string *look() = 0;

};

#endif //CPP_RUSH2_ITABLE_HPP
