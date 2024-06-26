#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
# include <algorithm>
# include <vector> // for container
# include <climits>

class Span
{
	private:
		unsigned int N;
		std::vector<int> vector;
	public:
	    Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span &operator=(Span const &rhs);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();


		template<typename Input>
		void addNumbers(Input first_iter, Input last_iter);

        void print_Array();

};

template<typename Input>
void Span::addNumbers(Input first_iter, Input last_iter) {
    if (vector.size() + std::distance(first_iter, last_iter) > N) {
        throw std::out_of_range("Span is full, cannot add more elements");
    }
    vector.insert(vector.end(), first_iter, last_iter);
}

#endif
