/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_PAPAXMASELF_HPP
#define CPP_RUSH2_PAPAXMASELF_HPP

#include "IElf.hpp"
#include "../../object/Object.hpp"
#include "../table/IConveyorBelt.hpp"
#include "../table/ITable.hpp"
#include "PapaXmasElf.hpp"
#include "../table/PapaXmasConveyorBelt.hpp"
#include "../table/PapaXmasTable.hpp"
#include "../table/PapaXmasConveyorBelt.hpp"
#include "../table/ConveyorBeltRand.hpp"
#include "../table/TableRand.hpp"

class Hand {
	public:
	Object *_object;
	bool	_Empty;

	public:
	Hand();
	~Hand();
	void pushIn(IConveyorBelt *belt);
	void pushOut(IConveyorBelt *belt);
	bool isEmpty();
};

class PapaXmasElf : public IElf
{
	private:
	Hand hand;
	public:
	PapaXmasElf(ConveyorBeltRand *belt, TableRand *table);
	PapaXmasElf(PapaXmasElf &other);
	~PapaXmasElf();

	Toy *getToy() final;
	Box *getBox() final;
	Object *receiveWrap() final;
	GiftPaper *getGiftPaper() final;
	bool SendGift();
	void operator=(PapaXmasElf const &other);
};



#endif //CPP_RUSH2_PAPAXMASELF_HPP
