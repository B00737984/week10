//author: james campbell//
//polymorphism//
//person.h//

#pragma once

#include <iostream>
#include <string>



class person {

private:
	std::string name_;
	std::string email_;

public: 

	virtual std::string ToString();

	//getter and setter//

	void SetName(std::string name);
	std::string GetName() const;

	void SetEmail(std::string name);
	std::string GetEmail() const;

};