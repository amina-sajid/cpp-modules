#include "iter.hpp"


int main(void)
{
	int intArray[5] = {5,10,15,20,25};
	float floatArray[6] = {1.1,2.2,3.3,4.4,5.5,6.6};
	std::string stringArray[5] = {"Hello","42",  "abudhabi", "Good", "morning"};

	iter<int>(intArray, 5, printElement);
	iter<float>(floatArray, 6, printElement);
	iter<std::string>(stringArray, 4, printElement);
}