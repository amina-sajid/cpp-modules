
#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "WRONG FORMAT" << std::endl;
		return 1;
	}

	RPN rpncalculator;
	std::string input = av[1];

	if(rpncalculator.evaluateExpression(input) !=0 )
	{
		rpncalculator.~RPN();
		exit(EXIT_FAILURE);
	}
		
	rpncalculator.printResult(std::cout);

	return 0;
}