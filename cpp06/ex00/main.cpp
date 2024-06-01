#include "ScalarConverter.hpp"

#define RED   "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Wrong format\n" ;
		std::cout << RESET;
		std::cout << GREEN << "correct format : ./convert arg" << std::endl;
		return 1;
	}

	if (av[1][0] == '\0')
	{
		std::cout << "Error\nThe arguments should not be empty" << std::endl;
		return 1;
	}

	std::string str(av[1]);
	ScalarConverter::convert(str);
	return 0;
}
