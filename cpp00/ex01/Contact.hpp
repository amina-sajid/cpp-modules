/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:41:50 by asajid            #+#    #+#             */
/*   Updated: 2023/12/20 14:41:50 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


# include <iostream>
# include <unistd.h>//sleep
# include <iomanip>//setw

typedef std::string str;

class Contact{
	private:
		str	name;
		str last_name;
		str secret;
		str nick_name;
		str phone_num;

	public:
		Contact();
		~Contact();

		void setName(str fname);
		void setLast(str lname);
		void setNick(str nickname);
		void setPhone(str phonenumber);
		void setSecret(str secret);
		str  getName() const;
		str  getLast() const;
		str  getNick() const;
		str  getPhone()const;
		str  getSecret() const;

};

#endif
