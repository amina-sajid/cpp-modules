/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:03:06 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 16:19:00 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>
// #include "Weapon.hpp"

class HumanB
{
	private:
		std::string bName;
		Weapon		*bWeapon;
		//Use a pointer when the object's ownership can change or when the object
		// might not always exist. This is useful when you want to represent the possibility of "no weapon."
		//HumanB might not always have a weapon, so it uses a pointer and manages the memory accordingly.
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif
