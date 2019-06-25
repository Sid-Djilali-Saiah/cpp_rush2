/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_PAPAXMASTABLE_HPP
#define CPP_RUSH2_PAPAXMASTABLE_HPP

#include "ITable.hpp"
#include "../../object/toy/Teddy.hpp"
#include "../../object/toy/LittlePony.hpp"
#include "../../object/toy/Toy.hpp"
#include "../../object/wrap/Wrap.hpp"
#include "../../object/wrap/Box.hpp"
#include "../../object/wrap/GiftPaper.hpp"
#include "../../object/Object.hpp"

class PapaXmasTable : public ITable
{
	public:
	PapaXmasTable();
	~PapaXmasTable();

	ITable *PapaXmasTable::createTable();

	Object *takeObject() final;
	virtual bool putObject(Object *object);
	virtual std::string *look();
};

#endif //CPP_RUSH2_PAPAXMASTABLE_HPP
