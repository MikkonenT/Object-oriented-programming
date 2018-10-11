#pragma once
#include <iostream>
#include <string>

class Student {
	//Data members private
private:
	std::string ID_, name_, course_;
	int year_, credits_, ModuleOneMark_, ModuleTwoMark_, ModuleThreeMark_;

public:

	//Default constructor
	Student();

	//Custom constructor
	explicit Student(std::string name);

	Student(std::string name, std::string ID, std::string course, int year, int credits);

	//Getters and setters
	void SetName(std::string name);
	std::string GetName() const;

	void SetId(std::string  ID);
	std::string GetId() const;

	void SetYear(int year);
	int GetYear() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

};