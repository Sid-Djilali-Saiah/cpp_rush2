//
// Created by abderrahim on 13/01/18.
//

#include "../object/wrap/Wrap.hpp"
#include "../object/wrap/GiftPaper.hpp"
#include "../object/wrap/Box.hpp"
#include "../object/Object.hpp"
#include "../object/toy/Toy.hpp"
#include "../object/toy/LittlePony.hpp"
#include "../object/toy/Teddy.hpp"
#include <cstddef>
#include <iostream>

Object **MyUnitTests(){
	Object **array = new Object*[3];

	array[0] = new LittlePony("happy pony");
	array[1] = new Teddy("cuddles");
	array[2] = NULL;
	return array;
}

int main(int ac, char **av)
{
	Object **object;

	object = MyUnitTests();
	std::string one = object[0]->isToy() ? "true" : "false";
	std::string two = object[1]->isToy() ? "true" : "false";

	std::cout << "Obj is a poney: " << one << std::endl;
	std::cout << "Obj is a teddy: " << two << std::endl;
	return 0;
}
