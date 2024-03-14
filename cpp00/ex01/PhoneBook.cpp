/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:59:37 by asajid            #+#    #+#             */
/*   Updated: 2023/12/20 14:59:37 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->size = 0;
	this->index = 0;
	this->max = 8;

}

PhoneBook::~PhoneBook()
{

}


void PhoneBook::add_contact()
{
	str	name;
	str last_name;
	str secret;
	str nick_name;
	str phone_num;

	if (this->index == 8)
		this->index = 0;
	if (this->size < 8)
		this->size++;
	std::cout << BLUE << "Enter the Name: ";
	std::getline(std::cin >> std::ws, name);
	std::cout << BLUE <<"Enter the last name: ";
	std::getline(std::cin >> std::ws, last_name);
	std::cout << BLUE <<"Enter the nick name: ";
	std::getline(std::cin >> std::ws,nick_name);
	std::cout << BLUE <<"Enter the secret: ";
	std::getline(std::cin >> std::ws, secret);
	std::cout << BLUE <<"Enter the Phone Number:";
	std::getline(std::cin >> std::ws, phone_num);
	this->contacts[this->index].setName(name);
	this->contacts[this->index].setLast(last_name);
	this->contacts[this->index].setNick(nick_name);
	this->contacts[this->index].setSecret(secret);
	this->contacts[this->index].setPhone(phone_num);
	this->index++;
}



void PhoneBook::search_contact()
{
	int i = 0;
	str	name;
	str last_name;
	str nick_name;
	str phone_num;
	str secret;
	str input;
	int index;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	while (  i < size)
	{
		name = this->contacts[i].getName();
		last_name = this->contacts[i].getLast();
		nick_name = this->contacts[i].getNick();
		phone_num = this->contacts[i].getPhone();
		if (name.length() > 9)
			name = name.substr(0, 9) + ".";
		if (last_name.length() > 9)
			last_name = last_name.substr(0, 9) + ".";
		if (nick_name.length() > 9)
			nick_name = nick_name.substr(0, 9) + ".";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << name << "|";
		std::cout << std::setw(10) << last_name << "|";
		std::cout << std::setw(10) << nick_name << std::endl;
		i++;

	}
	std::cout << "CHOOSE AN INDEX:) ";
	std::getline(std::cin , input);
	index = atoi(input.c_str());
	if ((index == 0 && input[0] != '0') || (index > 7 || index < 0)) {
		std::cout << "*****Please enter a valid index*****" << std::endl; sleep(1); return;
	}
	if (index >= this->size) {
		std::cout << "*****Wrong index*****" << std::endl; sleep(1); return;
	}
	std::cout << "Name : " << this->contacts[index].getName() << std::endl;
	std::cout << "Lastname : " << this->contacts[index].getLast() << std::endl;
	std::cout << "Nickname : " << this->contacts[index].getNick() << std::endl;
	std::cout << "Phone number : " << this->contacts[index].getPhone() << std::endl;
	std::cout << "Darkest secret : " << this->contacts[index].getSecret() << std::endl;
	std::cout << std::endl << "Press Enter" ;
	getchar();

}
