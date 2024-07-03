
#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &other):newStack(other.newStack){}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->newStack = other.newStack;
	}
	return (*this);
}

RPN::~RPN(){}

int RPN::doOp(int operand1, int operand2, const std::string &op)
{	
	
	if (op == "+")
		return operand1 + operand2;
	else if (op == "-")
		return operand1 - operand2;
	else if (op == "*")
		return operand1 * operand2;
	else if (op == "/")
		return operand1/operand2;		
	
	return 0;
}

int RPN::evaluateExpression(const std::string &expression)
{
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token)
	{
		if (token == "+" || token == "-" || token == "*" || token == "/")
		{
			if(newStack.size() < 2)
			{
				std::cerr << "Error: insufficient operands for operator." << std::endl;
				return(1);
			}

			int operand2 = newStack.top();
			newStack.pop();
			int operand1 = newStack.top();
			newStack.pop();
			// if (operand1 >= 10 || operand2 >= 10)
			// {
			// 	std::cerr << "Error: the numbers must be less than 10" << std::endl;
			// 	return(1);
			// }
			if ( operand1 <= INT_MIN || operand2 <= INT_MIN)
			{
				std::cerr << "Error: the number is invalid" << std::endl;
				return(1);
			}
			if (token == "/" && operand2 == 0)
			{
				std::cerr << "Error: divison by zero" << std::endl;
				return (1);
			}
			int result = doOp(operand1, operand2, token);
			if (result >= INT_MAX || result <= INT_MIN)
			{
				std::cerr << "Error: result is greater than limits" << std::endl;
				return (1);	
			}

			newStack.push(result);
		}
		else if (token.find_first_of("0123456789") != token.npos)
		{
			int operand;
			std::istringstream(token) >> operand;
			newStack.push(operand);
		}
		else
		{
			std::cerr << "Error: invalid input." << std::endl;
			return(1);
		}
	}
	return 0;
}

int RPN::printResult(std::ostream &out)
{
	if (newStack.empty())
	{
		std::cerr << "Error: empty stack." << std::endl;
		return(1);
	}

	if (newStack.size() > 2)
	{
		std::cerr << "Error: more than one result." << std::endl;
		return 1;
	}

	out << newStack.top() << std::endl;
	return 0;
}