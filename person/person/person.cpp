// person.cpp : abstract Person base class//

#include <iostream>
#include <string>
#include "person.h"



person::person() {
}


person::person(std::string name, std::string email) {
	std::cout << "name: " << name << "\n" << "email: " << email;
}

virtual std::string person::ToString() {
	std::string personInfo{};
	personInfo.append("name; " + name_ + "\n email: " + email_);
	return personInfo;
}


void person::SetName(std::string name) {
	name_ = name;
}

std::string person::GetName() const {

	return name_;
}

void person::SetEmail(std::string email) {
	email_ = email;
}

std::string person::GetEmail() const {

	return email_;
}
