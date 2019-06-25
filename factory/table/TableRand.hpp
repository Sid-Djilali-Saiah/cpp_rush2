/*
** EPITECH PROJECT, 2021
** cpp_rush2
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_TABLERAND_HPP
#define CPP_RUSH2_TABLERAND_HPP

#include "PapaXmasTable.hpp"

class TableRand : public PapaXmasTable
{
	public:
	TableRand();
	~TableRand() override;
	void randomFillTable();
};

#endif //CPP_RUSH2_TABLERAND_HPP
