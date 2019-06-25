/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef SANTA_HPP
#define SANTA_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

class Santa {
public:
	void action(std::string content);
	void pars();
	Santa(std::string name);
private:
	std::ifstream _infile;
};

#endif
