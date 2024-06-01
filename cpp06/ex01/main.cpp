#include "Serializer.hpp"

int main()
{
	Data data;
	data.name = "john";
	data.num = 10;
	std::cout << "Data: num: " << data.num << "  Name: " << data.name  << std::endl;
	std::cout << "Data Address:  " << &data << std::endl;
	uintptr_t serializedPtr = Serializer::serialize(&data);
	std::cout << "Data serialized to uintptr_t: " << serializedPtr << std::endl;
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);
	std::cout << "*Deserialized data: num: " << deserializedPtr->num << " Name: " << deserializedPtr->name << std::endl;

	if (&data == deserializedPtr)
		std::cout << "process successful." << std::endl;
	else
		std::cout << "processFailed." << std::endl;
}
