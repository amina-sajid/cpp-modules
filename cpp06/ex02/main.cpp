
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *base = NULL;
	std::srand(time(NULL));
	int number = std::rand() % 3;

	if (number == 0)
	{
		base = new A();
		std::cout  << "The instantited class is A" << std::endl;
	}
	else if (number == 1)
	{
		base = new B();
		std::cout  << "The instantited class is B" << std::endl;
	}
	else if (number == 2)
	{
		base = new C();
		std::cout  << "The instantited class is C" << std::endl;
	}
	return base;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout  << "The actual type of the object pointed to by (*p) A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout  << "The actual type of the object pointed to by (*p) B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout  << "The actual type of the object pointed to by (*p) C" << std::endl;
	else
		std::cout  << "The actual type of the object pointed to by (*p) NULL" << std::endl;
}
void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout  << "The actual type of the object pointed to by (&p) A" << std::endl;
		return;
	}
	catch (const std::exception &e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout  << "The actual type of the object pointed to by (&p) B" << std::endl;
		return;
	}
	catch (const std::exception &e)	{}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout  << "The actual type of the object pointed to by (&p) C" << std::endl;
		return;
	}
	catch (const std::exception &e)	{}
	std::cout  << "The actual type of the object pointed to by (&p) NULL" << std::endl;
}

int main()
{
	Base *basePointer = generate();
	identify(basePointer);
	identify(*basePointer);

	delete basePointer;
}
