/*
** EPITECH PROJECT, 2021
** cpp_rush2
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "ConveyorBeltRand.hpp"
#include "../../object/wrap/Box.hpp"
#include "../../object/wrap/GiftPaper.hpp"

ConveyorBeltRand::ConveyorBeltRand() = default
{
}

ConveyorBeltRand::~ConveyorBeltRand() = default
{
}

void ConveyorBeltRand::IN()
{
	if (random() % 2)
		_object = new Box;
	else
		_object = new GiftPaper;
}