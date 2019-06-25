/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "PapaXmasConveyorBelt.hpp"
#include "../../object/toXml.hpp"
#include "../../object/wrap/Box.hpp"
#include "../../object/wrap/GiftPaper.hpp"


IConveyorBelt *PapaXmasConveyorBelt::createConveyorBelt()
{
	IConveyorBelt *belt = new PapaXmasConveyorBelt;
	belt->_isEmpty = true;
	return belt;
}

PapaXmasConveyorBelt::PapaXmasConveyorBelt()
{
	_isEmpty = true;
	_packedGifts = 1;
	_object = NULL;
	_isGiftPaper = false;
}

PapaXmasConveyorBelt::~PapaXmasConveyorBelt()
{
	delete _object;
}

Object *PapaXmasConveyorBelt::takeObject()
{
	_isEmpty = true;
	return _object;
}

bool PapaXmasConveyorBelt::putObject(Object *obj)
{
	if(_isEmpty) {
		_isEmpty = false;
		_object = obj;
		return true;
	}
	else
		return false;
}

void PapaXmasConveyorBelt::OUT()
{
	if (!_isEmpty && _object->getType() == UNKNOWN)
	{
		std::string name("gift" + std::to_string(_packedGifts) + ".xml");
		toXml xml(_object, name);
		xml.writeObject();
	}
	else {
		std::cerr << "Nothing on the ConveyorBelt" << std::endl;
	}
	_object = NULL;
	_isEmpty = true;
}

void 	PapaXmasConveyorBelt::IN()
{
	if(_isEmpty)
	{
		Object *object;
		_isGiftPaper = !_isGiftPaper;
		if (_isGiftPaper)
			object = new Box;
		else
			object = new GiftPaper;
		_object = object;
	}
}

bool PapaXmasConveyorBelt::isEmpty()
{
	return this->_isEmpty;
}