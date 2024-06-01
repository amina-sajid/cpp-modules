
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; }
ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(ScalarConverter overload)
{
	(void)overload;
	return (*this);
}


// A zero divided by zero results in NaN
// A positive number divided by zero results in inf
// A negative number divided by zero results in -inf

void check_input(std::string &str)
{
	int s = 0;
	int d = 0;
	int f = 0;

	if ((str.length() == 1 || str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan"))
			return;
	if (str.find_first_not_of(' ') == str.npos)
	{
		std::cout << "Invalid Input" << std::endl;
		exit(1);
	}
	if (str.find_first_not_of("+-.fF0123456789") != str.npos)
	{
		std::cout << "Invalid Input" << std::endl;
		exit(1);
	}

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '+' || str[i] == '-')
			s++;

		if (str[i] == '.')
			d++;

		if (str[i] == 'f' || str[i] == 'F')
			f++;

		if (s > 1 || d > 1 || f > 1)
		{
			std::cout << "Invalid Input" << std::endl;
			exit(1);
		}
	}

	if ((str.find('+') != str.npos && str[0] != '+') || (str.find('-') != str.npos && str[0] != '-'))
	{
		std::cout << "Invalid Input" << std::endl;
		exit(1);
	}

	if ((str.find('f') != str.npos && str[str.length() - 1] != 'f') || (str.find('F') != str.npos && str[str.length() - 1] != 'F'))
	{
		std::cout << "Inavlid Input." << std::endl;
		exit(1);
	}

}

void print_char(std::string &str)
{
	if (str.length() == 1)
	{
		char charValue = static_cast<char>(str[0]);
		if (std::isdigit(charValue) || !std::isprint(charValue))
			std::cout << "char: Non Displayable" << std::endl;
		else
			std::cout << "char: '" << charValue << "'" << std::endl;
	}
	else
	{
		long long longValue = atoll(str.c_str());
 		char charValue = static_cast<char>(longValue);
		if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
			std::cout << "char: Impossible" << std::endl;
		else if (longValue < 0 || longValue > 255)
			std::cout << "char: Impossible" << std::endl;
		else if (!std::isprint(longValue))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << charValue << "'" << std::endl;
	}
}

void print_int(std::string &str)
{

	if(str.length() == 1 && !std::isdigit(str[0]))
	{
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	return;
	}

	long long longValue = atoll(str.c_str());
	int intValue = static_cast<int>(longValue);

	if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "-+inf" || str == "nan")
		std::cout << "int: Impossible" << std::endl;
	else if (longValue < INT_MIN || longValue > INT_MAX || (str.length() == 1 && !std::isdigit(str[0])))
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << intValue << std::endl;

}

void print_float(std::string &str)
{
    double doubleValue = atof(str.c_str());
    float floatValue = static_cast<float>(doubleValue);

    if (str.length() == 1 && !std::isdigit(str[0]))
	{
        std::cout << "float: " << static_cast<int>(str[0]) << std::endl;
		return;
    }

    if (str == "-inff" || str == "-inf")
        std::cout << "float: " << "-inff" << std::endl;
    else if (str == "+inff" || str == "+inf")
        std::cout << "float: " << "+inff" << std::endl;
    else if (str == "nanf" || str == "nan")
        std::cout << "float: " << "nanf" << std::endl;
    else if (doubleValue < -FLT_MAX || doubleValue > FLT_MAX || (str.length() == 1 && !std::isdigit(str[0])))
        std::cout << "float: Impossible" << std::endl;
    else if (str.find('.') == str.npos)
        std::cout << "float: " << floatValue << ".0f" << std::endl;
    else
    {
        int precisionLength = str.length() - (str.find('.') + 1);
        if (str[str.length() - 1] == 'f' || str[str.length() - 1] == 'F')
            precisionLength--;
        std::cout << "float " << std::fixed << std::setprecision(precisionLength) << floatValue << "f" << std::endl;
    }
}


void print_double(std::string &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]) )
{
	std::cout << "double: " << static_cast<double>(str[0]) << ".0";
	return;
}

	double doubleValue = atof(str.c_str());

	if (str == "-inff" || str == "-inf")
		std::cout << "double: " << "-inf" << std::endl;
	else if (str == "+inff" || str == "+inf")
		std::cout << "double: " << "+inf" << std::endl;
	else if (str == "nanf" || str == "nan")
		std::cout << "double: " << "nan" << std::endl;
	else if (doubleValue < -DBL_MAX || doubleValue > DBL_MAX || (str.length() == !std::isdigit(str[0])))
		std::cout << "double: Impossible" << std::endl;
	else if (str.find('.') == str.npos)
		std::cout << "double: " << doubleValue << ".0" << std::endl;
	else
	{
		int precescionLength = str.length() - (str.find('.') + 1);

		if (str[str.length() - 1] == 'f' || str[str.length() - 1] == 'F')
			precescionLength--;

		std::cout << "double: " << std::fixed << std::setprecision(precescionLength) << doubleValue << std::endl;
	}
}

void ScalarConverter::convert(std::string &str){
	check_input(str);
	print_char(str);
	print_int(str);
	print_float(str);
	print_double(str);
}
