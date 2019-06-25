/*
** EPITECH PROJECT, 2021
** cpp_rush2
** File description:
** Created by abderrahim.cherkaoui@epitech.eu,
*/

#include <string>
#include <cstddef>
#include <iostream>
#include <fstream>
#include "../object/toXml.hpp"
#include "../object/wrap/Wrap.hpp"
#include "../object/wrap/GiftPaper.hpp"
#include "../object/wrap/Box.hpp"
#include "../object/Object.hpp"
#include "../object/toy/Toy.hpp"
#include "../object/toy/LittlePony.hpp"
#include "../object/toy/Teddy.hpp"

Object	**CreateObjArray()
{
	Object **array = new Object*[4];

	array[0] = new Teddy("cuddles");
	array[1] = new Box();
	array[2] = new GiftPaper();
	array[3] = NULL;
	return array;
}

void	PrintError(std::string message)
{
	std::cerr << "Error - " << message << std::endl;
}

Object	*MyUnitTests(Object **objects)
{
	int	size = 0;
	Object	*finalPresent;
	Box	*box;
	GiftPaper *giftPaper;

	if (!objects)
	{
		PrintError("The bag is empty !");
		return NULL;
	}
	while (objects[size])
		size += 1;
	if (size != 3)
	{
		PrintError("Something is missing in the bag !");
		return NULL;
	}
	box = (Box *)objects[1];
	giftPaper = (GiftPaper *)objects[2];
	box->openMe();
	box->WrapMeThat(objects[0]);
	box->closeMe();
	giftPaper->WrapMeThat(box);
	finalPresent = giftPaper;
	delete [] objects;
	return finalPresent;
}


int	main(void)
{
	Object **array = CreateObjArray();
	Object *present = MyUnitTests(array);
	toXml xml(present);
	xml.writeObject();

}
