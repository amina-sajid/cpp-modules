#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define BLUE    "\033[34m"

#include "Contact.hpp"


class PhoneBook
{
    private:
        Contact contacts[8];
        int     size;
        int     index;
        int max;
    public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
};

#endif
