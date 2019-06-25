/*
** EPITECH PROJECT, 2021
** C++_POOL
** Email: sid.djilali-saiah@epitech.eu
** Created by Sid Djilali Saiah,
*/

#include <cstring>
#include "Santa.hpp"

bool check_extension(char *str)
{
	int i = strlen(str);

	if (i < 4)
		return false;
	if (str[i] != 'l' || str[i - 1] != 'm'
			|| str[i - 2] != 'x' || str[i - 3] != '.')
		return false;
	return true;
}

int main(int argc, char **argv) {
	int i = 1;

	if (argc < 2)
	{
		std::cerr << "error: not enough arguments." << std::endl;
		return 84;
	}
	while (i < argc) {
		if (check_extension(argv[i]))
		{
			Santa *santa = new Santa(argv[i]);
			santa->pars();
			delete santa;
		} else
			std::cerr << "invalid file." << std::endl;
		i++;
	}
	return 0;
}
