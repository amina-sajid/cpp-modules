/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:15:46 by asajid            #+#    #+#             */
/*   Updated: 2023/12/26 16:18:10 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int 	fract_bits;
	public:
		Fixed();
		Fixed(const Fixed &copy);//copy const
		Fixed &operator=(const Fixed &src);// assignment operator overload
		~Fixed();// Destructors

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

#endif
