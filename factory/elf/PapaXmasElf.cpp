/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "IElf.hpp"
#include "PapaXmasElf.hpp"
#include "../table/IConveyorBelt.hpp"
#include "../table/ITable.hpp"
#include "PapaXmasElf.hpp"
#include "../table/PapaXmasConveyorBelt.hpp"
#include "../table/PapaXmasTable.hpp"
#include "../table/PapaXmasConveyorBelt.hpp"

Hand::Hand()
{
	_Empty = true;
	_object = new Object;
}

bool Hand::isEmpty(){
	return _Empty;
}

Hand::~Hand()
{
	delete _object;
}

void Hand::pushIn(IConveyorBelt *belt)
{
	belt->IN();
};

void Hand::pushOut(IConveyorBelt *belt)
{
	belt->OUT();
}

PapaXmasElf::PapaXmasElf(ConveyorBeltRand *belt, TableRand *table)
{
	_table = table;
	_belt = belt;
}

PapaXmasElf::PapaXmasElf(PapaXmasElf &other)
{
	_table = other._table;
	_belt = other._belt;
}

PapaXmasElf::~PapaXmasElf()
{
}

Toy *PapaXmasElf::getToy()
{
	if(hand.isEmpty()) {
		while (420) {
			hand._object = _table->takeObject();
			hand._Empty = false;
			if (hand._object == NULL)
				return NULL;
			else if (hand._object->isWrap()) {
				std::cout << "whistles while working"
					<< std::endl;
				if (!_belt->isEmpty()) {
					_belt->putObject(hand._object);
					hand._Empty = true;
					_belt->OUT();
				}
			}
			else if (hand._object->isToy())
				return (Toy *)hand._object;
			else
				return NULL;
		}
	}
	return NULL;
}

Box *PapaXmasElf::getBox() {
	if(hand.isEmpty() && _belt->isEmpty())
	{
		this->receiveWrap();
		if(hand._object->getType() == BOX)
			return (Box *)hand._object;
		_belt->putObject(hand._object);
		_belt->OUT();
		hand._Empty = true;
		hand._object = this->receiveWrap();
	}
	return (Box *)hand._object;
}

Object *PapaXmasElf::receiveWrap()
{
	hand.pushIn(_belt);
	hand._object = _belt->takeObject();
	hand._Empty = false;
	return hand._object;

}

GiftPaper *PapaXmasElf::getGiftPaper() {
	if(hand.isEmpty() && _belt->isEmpty())
	{
		this->receiveWrap();
		if(hand._object->getType() == GIFTPAPER)
			return (GiftPaper *)hand._object;
		_belt->putObject(hand._object);
		hand.pushOut(_belt);
		hand._Empty = true;
		hand._object = this->receiveWrap();
	}
	return (GiftPaper *)hand._object;
}

bool PapaXmasElf::SendGift()
{
	Object *gift;
	Box *box = getBox();

	if(box != NULL){
		box->openMe();
		_belt->putObject(box);
		hand._Empty = true;
		Toy *toy = getToy();
		hand._Empty = false;
		box->WrapMeThat(toy);
		hand._Empty = true;
		GiftPaper *giftPaper = getGiftPaper();
		giftPaper->WrapMeThat(box);
		gift = giftPaper;
		gift->setType(UNKNOWN);
		_belt->putObject(gift);
		hand.pushOut(_belt);
		return true;
	}
	return false;
}

void PapaXmasElf::operator=(PapaXmasElf const &other)
{
	_table = other._table;
	_belt = other._belt;
}