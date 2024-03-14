/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:23:58 by asajid            #+#    #+#             */
/*   Updated: 2023/12/21 17:23:59 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private:

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:

		Harl();
		~Harl();

		void    complain( std::string level );
};



# endif
