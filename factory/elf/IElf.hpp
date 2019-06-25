/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_IELF_HPP
#define CPP_RUSH2_IELF_HPP

#include "../table/ITable.hpp"
#include "../../object/toy/Teddy.hpp"
#include "../../object/toy/LittlePony.hpp"
#include "../../object/toy/Toy.hpp"
#include "../../object/wrap/Wrap.hpp"
#include "../../object/wrap/Box.hpp"
#include "../../object/wrap/GiftPaper.hpp"
#include "../../object/Object.hpp"
#include "../table/IConveyorBelt.hpp"
#include "../table/ITable.hpp"
#include "../table/PapaXmasConveyorBelt.hpp"
#include "../table/PapaXmasTable.hpp"
#include "../table/ConveyorBeltRand.hpp"
#include "../table/TableRand.hpp"

class IElf
{
	public:
		virtual Toy *getToy() = 0;
		virtual Box *getBox() = 0;
		virtual Object *receiveWrap() = 0;
		virtual GiftPaper *getGiftPaper() = 0;

	protected:
		 TableRand *_table;
		ConveyorBeltRand  *_belt;
};

#endif /* CPP_RUSH2_IELF_HPP */