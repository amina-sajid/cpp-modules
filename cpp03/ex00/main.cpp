/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:53:05 by asajid            #+#    #+#             */
/*   Updated: 2023/12/30 16:51:57 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap a;
	ClapTrap b(a);
	ClapTrap c;
	c = b;

	a.attack("trap");
	a. takeDamage(5);
	a.beRepaired(2);
	a.attack("aami");
	a.takeDamage(3);
	a.takeDamage(1);
	a.attack("trap");
	a.takeDamage(3);
	a.takeDamage(1);
	return (0);
}
