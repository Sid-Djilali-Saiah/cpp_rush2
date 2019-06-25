/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "toXml.hpp"

void toXml::writeObject()
{
	if (_object->getType() == LITTLEPONEY ||
	 _object->getType() == TEDDY) {
	 	writeToy((Toy*)_object);
	}
	else if (_object->getType() == BOX ||
	_object->getType() == GIFTPAPER)
		writeWrap((Wrap*)_object);
}

void toXml::writeWrap(Wrap *wrap)
{
	_outfile << "<"  << _array[wrap->getType()] << ">" << std::endl;
	if (wrap->getObject() && (wrap->getObject()->getType() == LITTLEPONEY || wrap->getObject()->getType() == TEDDY))
	 	writeToy((Toy*)wrap->getObject());
	else if (wrap->getObject() && (wrap->getObject()->getType() == BOX || wrap->getObject()->getType() == GIFTPAPER))
		writeWrap((Wrap*)wrap->getObject());
	_outfile << "</"  << _array[wrap->getType()] << ">" << std::endl;
}

void toXml::writeToy(Toy *toy)
{
	_outfile << "<"  << _array[toy->getType()] << ">" << std::endl;
	_outfile << toy->getTitle() << std::endl;
	_outfile << "</" << _array[toy->getType()] << ">" << std::endl;
}

toXml::toXml(Object *object , std::string name) : _outfile(name)
{
	_array = new std::string[5];
	_array[0] = "Unknown";
	_array[1] = "LittlePoney";
	_array[2] = "Teddy";
	_array[3] = "Box";
	_array[4] = "GiftPaper";
	_object = object;
}

toXml::~toXml()
{
}