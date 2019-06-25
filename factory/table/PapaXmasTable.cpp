/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "PapaXmasTable.hpp"
#include "../../object/Object.hpp"

PapaXmasTable::PapaXmasTable() : ITable()
{
}

PapaXmasTable::~PapaXmasTable()
{
}

std::string *PapaXmasTable::look()
{
	std::string array[MAX_OBJ];
	int i;

	for(i = 0; _objects[i]; i++)
	{
		switch (_objects[i]->getType())
		{
		case UNKNOWN :
			break;
		case LITTLEPONEY :
			array[i] = "LittlePoney";
			break;
		case TEDDY :
			array[i] = "Teddy";
			break;
		case BOX :
			array[i] = "Box";
			break;
		case GIFTPAPER :
			array[i] = "GiftPaper";
			break;
		}
	}
	array[i] = NULL;
	return array;
}

ITable *PapaXmasTable::createTable()
{
	ITable *table = new PapaXmasTable;
	for (int i = 0; i < MAX_OBJ; i++) {
		table[i] = NULL;
	}
	return table;
};

Object	*PapaXmasTable::takeObject()
{
	std::size_t i;
	Object *object = NULL;

	std::cout << "Take Object: " << _nbObj << std::endl;
	if(_nbObj !=  0) {
		object = _objects[0];
		_nbObj--;
		for(i = 0; i != MAX_OBJ - 1; i++) {
			if(_objects[i])
				_objects[i] = _objects[i + 1];
		}
		_objects[i++] = NULL;
	}
	return object;
}

bool PapaXmasTable::putObject(Object *obj)
{
	_nbObj++;

	std::cout << "Put Object: " <<_nbObj << std::endl;
	if (_nbObj > MAX_OBJ)
	{
		std::cout << "Error - Table collapses." << std::endl;
		delete [] _objects;
		return  false;

	} else {
		_objects[_nbObj] = obj;
		return true;
	}

}