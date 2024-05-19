/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:12:57 by asajid            #+#    #+#             */
/*   Updated: 2024/05/10 10:12:58 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {
    try {
        // Create a bureaucrat
        Bureaucrat bureaucrat("John", 50);
        std::cout << bureaucrat << std::endl;

        // Create forms
        AForm *shrubberyForm = new ShrubberyCreationForm("Home");
        AForm *robotomyForm = new RobotomyRequestForm("RoboTarget");
        AForm *pardonForm = new PresidentialPardonForm("PardonTarget");

        // Display forms
        std::cout << *shrubberyForm << std::endl;
        std::cout << *robotomyForm << std::endl;
        std::cout << *pardonForm << std::endl;

        // Sign and execute forms
        bureaucrat.signForm(*shrubberyForm);
        bureaucrat.executeForm(*shrubberyForm);
        bureaucrat.signForm(*robotomyForm);
        bureaucrat.executeForm(*robotomyForm);
        bureaucrat.signForm(*pardonForm);
        bureaucrat.executeForm(*pardonForm);

        // Test Intern class
        Intern intern;
        AForm *newForm = intern.makeForm("Shrubbery Creation", "Garden");
        if (newForm) {
            bureaucrat.signForm(*newForm);
            bureaucrat.executeForm(*newForm);
        }

        // Clean up
        delete shrubberyForm;
        delete robotomyForm;
        delete pardonForm;
        delete newForm;

    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
