/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef CPP_RUSH2_TEDDY_HPP
#define CPP_RUSH2_TEDDY_HPP

#include <iostream>
#include "Toy.hpp"

class Teddy : public Toy {

	public:
		explicit Teddy(std::string title);
		~Teddy();

		void isTaken();

		void operator=(Teddy const &other);
};

#endif /* CPP_RUSH2_TEDDY_HPP */
