/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:08:46 by asajid            #+#    #+#             */
/*   Updated: 2024/05/19 14:04:49 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat highGradeBureaucrat("John", 1);
		std::cout << highGradeBureaucrat << std::endl;

		Bureaucrat lowGradeBureaucrat("Alice", 150);
		std::cout << lowGradeBureaucrat << std::endl;

		highGradeBureaucrat.decrementGrade();
		std::cout << highGradeBureaucrat << std::endl;

		lowGradeBureaucrat.decrementGrade();
		std::cout << lowGradeBureaucrat << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
