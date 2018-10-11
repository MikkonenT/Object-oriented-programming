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

	explicit Student(std::string name);
	//explicit Student(std::string ID);

	/*Custom constructor 1
	explicit Student(std::string name)
		:name_{"Billy Bragg"} {
		//Initialise name
	}
	/*explicit Student(std::string ID = "B00578985");
	explicit Student(std::string course = "Music theory");
	explicit Student(int year = 3);
	explicit Student(int credits = 80);
	explicit Student(int ModuleOneMark = 87);
	explicit Student(int ModuleTwoMark = 92 );
	explicit Student(int ModuleThreeMark= 47);*/

	//Custom constructor 2

	

	void SetName(std::string name);
	std::string GetName() const;

	void SetId(std::string  ID);
	std::string GetId() const;

	void SetYear(int year);
	int GetYear() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

};