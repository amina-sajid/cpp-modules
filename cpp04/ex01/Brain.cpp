
#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "brain destructor called\n";
}

Brain::Brain(Brain & src)
{
	*this = src;
	std::cout << "Brain copy constructor called \n";
}

Brain & Brain::operator=(Brain const & src)
{
	if (this != &src)
	{
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdeas(unsigned int index) const
{
   return this->ideas[index];
}

void Brain::setIdeas(unsigned int index, std::string idea)
{
  this->ideas[index] = idea;
}
