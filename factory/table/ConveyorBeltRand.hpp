/*
** EPITECH PROJECT, 2021
** cpp_rush2
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_CONVEYORBELTRAND_HPP
#define CPP_RUSH2_CONVEYORBELTRAND_HPP

#include <cstdlib>
#include "ConveyorBeltRand.hpp"
#include "PapaXmasConveyorBelt.hpp"

class ConveyorBeltRand : public PapaXmasConveyorBelt
{
	public:
	ConveyorBeltRand();
	~ConveyorBeltRand() override;
	void IN() override;
};

#endif //CPP_RUSH2_CONVEYORBELTRAND_HPP
