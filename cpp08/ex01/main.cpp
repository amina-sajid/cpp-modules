#include "span.hpp"

int main()
{
	try{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(19);


    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        Span sp = Span(3);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::vector<int> myVector;
        Span sp(10000);

        for (int i = 0; i < 10000; i++) {
            myVector.push_back(i);
        }
        sp.addNumbers(myVector.begin(), myVector.end());
        std::cout << "Shortest Span: " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
        sp.addNumbers(myVector.begin(), myVector.end());

    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
