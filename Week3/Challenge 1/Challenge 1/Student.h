#pragma once
#include <iostream>
#include <string>

class Student {

private:
	std::string ID_, name_, course_;
	int year_, credits_, ModuleOneMark_, ModuleTwoMark_, ModuleThreeMark_;

public:
	void printName() const;
};