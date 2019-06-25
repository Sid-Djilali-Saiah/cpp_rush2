/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#ifndef POOL_TOY_HPP
#define POOL_TOY_HPP

#include "../Object.hpp"

class Toy : public Object
{
	public:
		Toy(e_obj type = UNKNOWN);
		~Toy(void);

	        std::string getTitle() const;
		virtual bool getIsTaken();

		void operator=(Toy &other);

	protected:
		std::string _title;
		bool _isTaken;
};

std::ostream &operator<<(std::ostream &os, Toy &toy);

#endif //POOL_TOY_HPP
