/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:58:44 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 16:18:57 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string aName;
		Weapon		&aWeapon;
		//Use a reference when the object's ownership won't change and when
		// the object is guaranteed to exist throughout the object's lifetime.
	public:
	//takes weapon in its constructor
		HumanA(std::string aName, Weapon &aWeapon);
		~HumanA(void);
		void attack(void);

};

#endif
