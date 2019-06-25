/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef TOXML_HPP
#define TOXML_HPP

#include <fstream>
#include "Object.hpp"
#include "wrap/Wrap.hpp"
#include "toy/Toy.hpp"

class toXml {
public:
	void writeObject();
	void writeWrap(Wrap *wrap);
	void writeToy(Toy *toy);
	toXml(Object *object, std::string name);
	~toXml();
private:
	std::ofstream _outfile;
	std::string *_array;
	Object *_object;
};

#endif
