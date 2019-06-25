/*
** EPITECH PROJECT, 2021
** cpp_rush2
** File description:
** Created by abderrahim.cherkaoui@epitech.eu,
*/

#include <string>
#include <iostream>
#include "../object/Object.hpp"
#include "../object/toy/Teddy.hpp"
#include "../object/toy/LittlePony.hpp"
#include "../object/wrap/GiftPaper.hpp"
#include "../object/wrap/Box.hpp"
#include "../object/toXml.hpp"

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

Object	*MyUnitTests2(Object **objects)
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

Object **MyUnitTests(){
	Object **array = new Object*[3];

	array[0] = new LittlePony("happy pony");
	array[1] = new Teddy("cuddles");
	array[2] = NULL;
	return array;
}

int		main(void)
{
	std::cout << "----- TEST OBJECTS -----" << std::endl;
	Object **object;

	object = MyUnitTests();
	std::string one = object[0]->isToy() ? "true" : "false";
	std::string two = object[1]->isToy() ? "true" : "false";

	std::cout << "Object is a Poney: " << one << std::endl;
	std::cout << "Object is a Teddy: " << two << std::endl;

	std::cout << std::endl <<std::endl;
	std::cout << "----- TEST OBJECTS 2 -----" << std::endl;

	Object **array = CreateObjArray();
	Object *present = MyUnitTests2(array);
	std::cout <<
		"Congratulations your gift is wrapped and ready for Santa !"
		<<std::endl;

	std::cout << std::endl <<std::endl;
	std::cout << "-------- TEST UNITAIRE - ELF --------" << std::endl;

	std::cout << std::endl <<std::endl;
	std::cout << std::endl <<std::endl;

	std::cout << "-------- TEST XML --------" << std::endl;

	toXml xml(present, "test1");
	xml.writeObject();
	std::cout <<
		"Congratulations your XML File is created !"
		<<std::endl;

	std::cout << std::endl <<std::endl;

	std::cout << "-------- TEST ELF --------" << std::endl;


	return 0;
}