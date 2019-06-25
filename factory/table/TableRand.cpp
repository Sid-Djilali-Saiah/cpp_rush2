/*
** EPITECH PROJECT, 2021
** cpp_rush2
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "TableRand.hpp"
#include <cstdlib>
#include "../../object/toy/Teddy.hpp"
#include "../../object/toy/LittlePony.hpp"
#include "../../object/wrap/Box.hpp"
#include "../../object/wrap/GiftPaper.hpp"
#include "TableRand.hpp"

void TableRand::randomFillTable()
{
	std::size_t nbToy = 0;

	for (int i = 0; i != MAX_OBJ - 1; ++i)
		switch (nbToy > 2 ? random() % 4 : random() % 2) {
		case 0:
			_objects[i] = new Teddy("cuddles");
			nbToy++;
			break ;
		case 1:
			_objects[i] = new LittlePony("happy pony");
			nbToy++;
			break ;
		case 2:
			_objects[i] = new Box;
			break ;
		case 3:
			_objects[i] = new GiftPaper;
			break ;
		}
	_objects[MAX_OBJ] = NULL;
}

TableRand::TableRand() : PapaXmasTable()
{
	_objects = new Object*[MAX_OBJ +1];
	randomFillTable();
}

TableRand::~TableRand()
{
	delete [] _objects;
}