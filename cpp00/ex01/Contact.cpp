/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajid <asajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:41:40 by asajid            #+#    #+#             */
/*   Updated: 2023/12/20 14:41:40 by asajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void	Contact::setName(str name) {
	this->name = name;
}

void	Contact::setLast(str last) {
	this->last_name = last;
}

void	Contact::setNick(str nick) {
	this->nick_name = nick;
}

void	Contact::setPhone(str phone) {
	this->phone_num = phone;
}

void	Contact::setSecret(str secret) {
	this->secret = secret;
}

str	Contact::getName() const {
	return this->name;
}

str Contact::getLast() const {
	return this->last_name;
}

str Contact::getNick() const {
	return this->nick_name;
}

str Contact::getPhone() const {
	return this->phone_num;
}

str	Contact::getSecret() const {
	return this->secret;
}
