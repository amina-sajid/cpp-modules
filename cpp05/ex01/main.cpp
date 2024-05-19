/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:08:46 by asajid            #+#    #+#             */
/*   Updated: 2024/05/10 09:13:15 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
	try
	{
			Bureaucrat bureaucrat("John", 50);
			Form form("Application Form", 60, 70);
			std::cout << bureaucrat << std::endl;
			std::cout << form << std::endl;
			bureaucrat.signForm(form);
			std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
