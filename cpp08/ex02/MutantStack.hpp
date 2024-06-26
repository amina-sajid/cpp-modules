#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"
#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
public:
	typedef std::stack<T> stack;
	typedef typename stack::container_type container;
	typedef typename container::iterator iterator;

	// Constructors
	MutantStack() : stack()
	{
		std::cout << "Default Constructor called" << std::endl;
	}

	MutantStack(const stack &src) : stack(src)
	{
		std::cout << "Copy Constructor called" << std::endl;
	}

	// Destuctor
	~MutantStack()
	{
		std::cout << "Destuctor called" << std::endl;
	}

	// Overloaded opperators
	stack &operator=(const stack &src)
	{
		if (*this != src)
			*this = src;
		return (*this);
	}

	// begin iterator
	iterator begin()
	{
		return (stack::c.begin());
	}

	// end iterator
	iterator end()
	{
		return (stack::c.end());
	}
};
#endif
