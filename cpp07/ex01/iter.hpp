
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T *array, size_t arraylength, void (*function)(T &element))
{
	if (array == NULL || function == NULL)
		return ;
	
	for (size_t i = 0; i < arraylength; i++)
		function(array[i]);
}

template<typename T>
void printElement(T element)
{
	std::cout << element << std::endl;
}


#endif