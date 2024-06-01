#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h> 


struct Data 
{
	int num;
	std::string name;
};

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer &copy);
		~Serializer();
		Serializer &operator=(const Serializer &overload);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif