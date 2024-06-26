#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v1;
	v1.push_back(5);
	v1.push_back(-12);
	v1.push_back(10);
	v1.push_back(-20);
	v1.push_back(10);
	v1.push_back(42);

	try
	{
		std::vector<int>::iterator value = easyfind(v1, 10);
		std::cout <<  "value: found: " << *value << std::endl;
			
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "10 not found" << e.what() << '\n';
	}

	try
	{
		std::vector<int>::iterator value = easyfind(v1, 55);
		std::cout <<  "value found: " << *value << std::endl;
			
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "55 not found Exception: " << e.what() << '\n';
	}
	
}