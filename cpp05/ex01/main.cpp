/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:08:46 by asajid            #+#    #+#             */
/*   Updated: 2024/04/12 17:27:23 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

void	testBasic(void)
{
	Bureaucrat	bob("bob", 6);

	std::cout << bob << std::endl;
	bob.decrementGrade();
	std::cout << bob << std::endl;
	bob.incrementGrade();
	bob.incrementGrade();
	bob.incrementGrade();
	bob.incrementGrade();
	std::cout << bob << std::endl;
}

void	testExceptionLow(void)
{
	Bureaucrat	bob("bob", 151);
}

void	testExceptionHigh(void)
{
	Bureaucrat	bob("bob", 0);
}

void	testdecrementGrade(void)
{
	Bureaucrat	bob("bob", 2);
	bob.incrementGrade();
	std::cout << bob << std::endl;
	bob.incrementGrade();
}

void	testincrementGrade(void)
{
	Bureaucrat	bob("bob", 149);
	bob.decrementGrade();
	std::cout << bob << std::endl;
	bob.decrementGrade();
}

int	main(void)
{
	try
	{
		testBasic();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		testExceptionLow();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		testExceptionHigh();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		testdecrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		testincrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
