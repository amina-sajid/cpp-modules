/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:35:26 by asajid            #+#    #+#             */
/*   Updated: 2023/12/27 11:35:26 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
	private:
		int	value;
		static const int fract_bits;

	public:

		Fixed(); // Constructor
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed &copy);
		~Fixed();// Destructors
		Fixed &operator=(const Fixed &src); // Overloaded Operator

        //comparison operators > < >= <= != ==
        int operator>(const Fixed &src) const;
        int operator<(const Fixed &src) const;
        int operator>=(const Fixed &src) const;
        int operator<=(const Fixed &src) const;
        int operator==(const Fixed &src) const;
        int operator!=(const Fixed &src) const;

        //arithemetic operators + - * /
        float operator+(const Fixed &src)const;
		float operator-(const Fixed &src)const;
		float operator*(const Fixed &src)const;
		float operator/(const Fixed &src)const;

        // pre-increment Operators
		Fixed operator++();
		Fixed operator--();

        // post-increment Operators
		Fixed operator++(int);
		Fixed operator--(int);

		int toInt(void)const;
		float toFloat(void)const;
        static Fixed &min(Fixed &num_1, Fixed &num_2);
        static const Fixed &min(const Fixed &num_1, const Fixed &num_2);
        static Fixed &max(Fixed &num_1, Fixed &num_2);
        static const Fixed &max(const Fixed &num_1, const Fixed &num_2);

		int getRawBits(void)const;
		void setRawBits(int const raw);
};

//overload for ostream
std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
