/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:52:22 by asajid            #+#    #+#             */
/*   Updated: 2023/11/21 12:35:08 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon
{
	private :

		std::string type;

	public:
		Weapon (std::string type);
		~Weapon(void);
		const std::string& getType(void);
		void	setType(std::string new_type);
};


#endif

