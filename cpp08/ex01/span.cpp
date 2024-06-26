#include "span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n): N(n), vector() { vector.reserve(n); }

Span::Span(Span const &copy) : N(copy.N), vector(copy.vector) {}

Span & Span::operator=(Span const &rhs){
    if (this != &rhs){
        N = rhs.N;
        vector = rhs.vector;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (vector.size() == N) {
        throw std::out_of_range("Span is full; cannot add more elements");
    }
    vector.push_back(number);
}

int Span::shortestSpan(){
    if (vector.size() < 2){
        throw std::out_of_range("No Span can be found");
    }
    std::vector<int> new_vector(vector);
    std::sort(new_vector.begin(), new_vector.end());

    int min_distance = new_vector[1] - new_vector[0];
    for(size_t i = 1; i < new_vector.size(); ++i){
        int diff = new_vector[i] - new_vector[i - 1];
        if (diff < min_distance)
            min_distance = diff;
    }
    return min_distance;
}

int Span::longestSpan() {
    if (vector.size() < 2) {
        throw std::out_of_range("No Span can be found");
    }

    int min_element = *std::min_element(vector.begin(), vector.end());
    int max_element = *std::max_element(vector.begin(), vector.end());
    return (max_element - min_element);
}

// void Span::print_Array(){
//     std::cout << "Array Numbers: ";
//      for (unsigned int i = 0; i < vector.size(); i++){
//             std::cout << vector[i] << " ";
//         }
//         std::cout << std::endl;
// }
