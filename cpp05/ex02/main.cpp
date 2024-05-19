/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:58:48 by asajid            #+#    #+#             */
/*   Updated: 2024/05/10 10:05:35 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        std::cout << "******SHRUBBERY CREATION SUCCESS TEST********" << std::endl;
        Bureaucrat b = Bureaucrat("amina", 137);
        ShrubberyCreationForm shrub("Shrub");
        b.signForm(shrub);
        b.executeForm(shrub);
        std::cout << b << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << "**SHRUBBERY CREATION INVALID EXEC_GRADE TEST**" << std::endl;
        Bureaucrat b = Bureaucrat("amina", 138);
        ShrubberyCreationForm shrub("Shrub");
        b.signForm(shrub);
        b.executeForm(shrub);
        std::cout << b << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << "**SHRUBBERY CREATION INVALID SIGN_GRADE TEST**" << std::endl;
        Bureaucrat b = Bureaucrat("amina", 146);
        ShrubberyCreationForm shrub("Shrub");
        b.signForm(shrub);
        b.executeForm(shrub);
        std::cout << b << std::endl;
        std::cout << shrub << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << "**ROBOTOMY SIGN FAIL TEST**" << std::endl;
        Bureaucrat b = Bureaucrat("amina", 146);
        RobotomyRequestForm robot("Robot");
        b.signForm(robot);
        b.executeForm(robot);
        std::cout << b << std::endl;
        std::cout << robot << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << "**ROBOTOMY SIGN SUCCESS TEST**" << std::endl;
        Bureaucrat b = Bureaucrat("amina", 41);
        RobotomyRequestForm robot("Robot");
        b.signForm(robot);
        b.executeForm(robot);
        std::cout << b << std::endl;
        std::cout << robot << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        std::cout << "PRESIDENTIAL PARDON SIGN TEST POSITIVE" << std::endl;
        Bureaucrat b = Bureaucrat("amina", 4);
        PresidentialPardonForm pardon("Class A");
        b.signForm(pardon);
        b.executeForm(pardon);
        std::cout << b << std::endl;
        std::cout << pardon << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
