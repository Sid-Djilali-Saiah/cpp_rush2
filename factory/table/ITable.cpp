/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include "ITable.hpp"

ITable::ITable()
{
	std::cout << "Create Table." << std::endl;
	_nbObj = 0;
	_objects = new Object*[11];
}

ITable::~ITable()
{
	delete [] _objects;
	std::cout << "Destroy Table." << std::endl;
}