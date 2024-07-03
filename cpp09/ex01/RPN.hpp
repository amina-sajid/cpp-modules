
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <cstdlib>
#include <climits>
class RPN
{
	private:
		std::stack<int> newStack;
		int doOp(int operand1, int operand2, const std::string &op);

	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		int evaluateExpression(const std::string &expr);
		int printResult(std::ostream &out);
};

#endif