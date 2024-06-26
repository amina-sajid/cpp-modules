
#include "MutantStack.hpp"

int main()
{
	MutantStack<std::string> mstack_string;
	mstack_string.push("Five");
	mstack_string.push("Seventeen");
	mstack_string.pop();
	mstack_string.push("Three");
	mstack_string.push("Seven hundred thirty-seven");

	MutantStack<int> mstack;
	mstack.push(17);
	mstack.pop();
	mstack.push(3);
	mstack.push(737);
	mstack.push(5);

	std::cout << std::endl;

	MutantStack<std::string>::iterator s_it = mstack_string.begin();
	MutantStack<std::string>::iterator e_it = mstack_string.end();


	while (s_it != e_it)
	{
		std::cout << *s_it << std::endl;
		++s_it;
	}

	std::cout << std::endl << std::endl << "Size: " << mstack_string.size() << std::endl;
	mstack_string.pop();
	mstack_string.pop();
	mstack_string.pop();
	std::cout << std::endl << std::endl << "Size: " << mstack_string.size() << std::endl;


	MutantStack<int>::iterator it_s = mstack.begin();
	MutantStack<int>::iterator it_e = mstack.end();


	while (it_s != it_e)
	{
		std::cout << *it_s ;
		++it_s;
	}

	std::cout << std::endl << std::endl << "Size: " << mstack.size() << std::endl;

	return 0;
}
