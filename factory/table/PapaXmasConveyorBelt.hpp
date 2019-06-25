/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_PAPAXMASCONVEYORBELT_HPP
#define CPP_RUSH2_PAPAXMASCONVEYORBELT_HPP

#include "IConveyorBelt.hpp"
#include "../../object/Object.hpp"

class PapaXmasConveyorBelt : public IConveyorBelt {

	protected:
	std::size_t 	_packedGifts;
	bool		_isGiftPaper;

	public:
	PapaXmasConveyorBelt();
	~PapaXmasConveyorBelt() override;

	Object *takeObject() final;
	bool putObject(Object *object) final;
	void IN () override;
	void OUT() override;
	bool isEmpty() final;
	IConveyorBelt *createConveyorBelt();
};


#endif //CPP_RUSH2_PAPAXMASCONVEYORBELT_HPP
