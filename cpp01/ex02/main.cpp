/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:08:15 by asajid            #+#    #+#             */
/*   Updated: 2023/12/25 14:12:34 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
#include <iostream>

int main (void)
{
	std::string 	newSTR = "HI THIS IS BRAIN";
	std::string* 	stringPTR = &newSTR;
	std::string&	stringREF = newSTR;

	std::cout << "memory address of the string variable newSTR : " << &newSTR << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "the value of the string variable newSTR  : " << newSTR << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
	return (0);
}
