/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:02:00 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 12:02:00 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	size;

	size = 2;
	Zombie *horde = zombieHorde(size, "bob");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
