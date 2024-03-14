/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:59:25 by asajid            #+#    #+#             */
/*   Updated: 2023/12/20 14:59:25 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
    PhoneBook phoneBook;
    std::string input;

    while (true) {
        std::cout << BLUE << " ***PHONEBOOK*** " << std::endl;
        std::cout << "To save a new contact type ADD " << std::endl;
        std::cout << "To display a specific contact type SEARCH" << std::endl;
        std::cout << "To quit the phonebook type EXIT ---caution: the contacts will be lost forever " << std::endl;
        std::cout << "ADD/SEARCH/EXIT : ";

        getline(std::cin, input);

        if (input == "ADD") {
            phoneBook.add_contact();
        } else if (input == "SEARCH") {
            phoneBook.search_contact();
        } else if (input == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
    }

    return 0;
}
