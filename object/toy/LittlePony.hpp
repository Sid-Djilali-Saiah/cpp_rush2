/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_LITTLEPONY_HPP
#define CPP_RUSH2_LITTLEPONY_HPP

#include <iostream>
#include "Toy.hpp"

class LittlePony : public Toy
{

	public:
		explicit LittlePony(std::string title);
		~LittlePony();

		void isTaken();
		void operator=(LittlePony const &other);
};

#endif /* CPP_RUSH2_LITTLEPONY_HPP */
