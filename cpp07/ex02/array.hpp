#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int length;


	public:

		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array &operator=(const Array &other);
		T &operator[](unsigned int index);
		unsigned int size() const;

};


#endif
