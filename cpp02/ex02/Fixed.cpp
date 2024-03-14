#include "Fixed.hpp"

const int Fixed::fract_bits = 8;


Fixed::Fixed()//default constructor
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &copy) //copy const
{
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &src) //assignmnt opertr
{
	if (this != &src)
		this->value = src.getRawBits();
	return *this;
}

Fixed::Fixed (const int input) // int constructor
{
    this->value = input << this->fract_bits;
}

Fixed::Fixed (const float input)// float constructor
{
    this->value = roundf(input * (1 << this->fract_bits));
}

int	Fixed::toInt(void)const// convert fixed to int
{
	return (this->value >> this->fract_bits);
}

float	Fixed::toFloat(void)const // converts fixed to float
{
	return ((float)this->value / (float)(1 << this->fract_bits));
}

int	Fixed::getRawBits(void)const// Getter
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)// Setter
{
	this->value = raw;
}

Fixed	Fixed::operator++()// Overloaded pre-increment Operators
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator--()// Overloaded pre-decrement Operators
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int) // Overloaded post-increment Operators
{
	Fixed tmp = *this;
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)// Overloaded post-decrement Operators
{
	Fixed tmp = *this;
	// i = this->value;
	--this->value;
	return (tmp);
}

int Fixed::operator>(const Fixed &src) const
{
	if (this->getRawBits() > src.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<(const Fixed &src) const
{
	if (this->getRawBits() < src.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=(const Fixed &src) const
{
	if (this->getRawBits() >= src.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=(const Fixed &src) const
{
	if (this->getRawBits() <= src.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator==( const Fixed &src) const
{
	if (this->getRawBits() == src.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=(const Fixed &src) const
{
	if (this->getRawBits() != src.getRawBits())
		return (1);
	return (0);
}

// Overloaded Arithmetic Operators
float Fixed::operator+(const Fixed &src) const
{
	return (this->toFloat() + src.toFloat());
}

float Fixed::operator-(const Fixed &src) const
{
	return (this->toFloat() - src.toFloat());
}

float Fixed::operator*(const Fixed &src) const
{
	return (this->toFloat() * src.toFloat());
}

float Fixed::operator/(const Fixed &src) const
{
	return (this->toFloat() / src.toFloat());
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}


Fixed::~Fixed()
{

}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
