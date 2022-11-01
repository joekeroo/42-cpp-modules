/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:52:55 by jhii              #+#    #+#             */
/*   Updated: 2022/11/01 17:05:10 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): _status(0) {}
Contact::~Contact(void) {}

void Contact::setStatus(int status) { this->_status = status; }
void Contact::setFirstName(std::string firstName) { this->_firstName = firstName; }
void Contact::setLastName(std::string lastName) { this->_lastName = lastName; }
void Contact::setNickName(std::string nickName) { this->_nickName = nickName; }
void Contact::setPhoneNumber(std::string phoneNumber) { this->_phoneNumber = phoneNumber; }
void Contact::setDarkestSecret(std::string darkestSecret) { this->_darkestSecret = darkestSecret; }

int Contact::getStatus(void) const { return (this->_status); }
std::string Contact::getFirstName(void) const { return (this->_firstName); }
std::string Contact::getLastName(void) const { return (this->_lastName); }
std::string Contact::getNickName(void) const { return (this->_nickName); }
std::string Contact::getPhoneNumber(void) const { return (this->_phoneNumber); }
std::string Contact::getDarkestSecret(void) const { return (this->_darkestSecret); }
