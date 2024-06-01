
#ifndef ScalarConverter_HPP
#define ScalarConverter_HPP

#include <iostream>
#include <iomanip>
#include <climits>
#include <cfloat>
#include <stdlib.h>


class ScalarConverter
{
	public:
		static void convert(std::string &str);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();

		ScalarConverter &operator=(ScalarConverter overload);	

};

#endif