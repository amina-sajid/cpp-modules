/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:17:58 by asajid            #+#    #+#             */
/*   Updated: 2023/12/30 16:55:48 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main()
{

	// 	ClapTrap a;
	// 	ClapTrap b("Cody");

	// 	a.attack("some other robot");
	// 	a.takeDamage(10);
	// 	a.takeDamage(10);
	// 	a.beRepaired(5);
	// 	a.attack("some other other robot");
	// 	b.beRepaired(3);
	// 	for (int i = 0; i < 12; i++)
	// 		b.attack("Cody-clone");
	// 	b.beRepaired(3);



		DiamondTrap a;
		DiamondTrap b("robo");
		DiamondTrap c(a);


		a.whoAmI();
		a.attack("someone");
		b.whoAmI();
		b.attack("him");
		c.whoAmI();

	return (0);
}
