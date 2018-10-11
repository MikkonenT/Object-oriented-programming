#include <iostream>
#include <string>
#include "Student.h"

// Default constructor
Student::Student()
{
	name_ = "";

}

//Non-default constructor
Student::Student(std::string name)
	:name_{ name } {
	std::cout << name_ << " is alive" << std::endl;
}

Student::Student(std::string name, std::string ID, std::string course, int year, int credits, int ModuleOneMark, int ModuleTwoMark, int ModuleThreeMark)
	: name_{ name }, ID_{ ID }, course_{ course }, year_{ year }, credits_{ credits }, ModuleOneMark_{ ModuleOneMark }, ModuleTwoMark_{ ModuleTwoMark }, ModuleThreeMark_{ ModuleThreeMark }{
	std::cout << name_ << " " << ID_<< " " << course_ << " " << year_ << " " << credits_ << " " << ModuleOneMark_ << " " << ModuleTwoMark_ << " " << ModuleThreeMark_ << std::endl;
}

//Getters and setters
//Name
void Student::SetName(std::string name) {
	name_ = name;
}
std::string Student::GetName() const {
	return name_;
}

//ID
void Student::SetId(std::string  ID) {
	ID_ = ID;
}
std::string Student::GetId() const {
	return ID_;
}

//Year
void Student::SetYear(int  year) {
	year_ = year;
}
int Student::GetYear() const {
	return year_;
}

//Course
void Student::SetCourse(std::string course) {
	course_ = course;
}
std::string Student::GetCourse() const {
	return course_;
}

//Module marks

void Student::SetMark1(int ModuleOneMark) {
	ModuleOneMark_ = ModuleOneMark;
}
int Student::GetMark1() const {
	return ModuleOneMark_;
}

void Student::SetMark2(int ModuleTwoMark) {
	ModuleTwoMark_ = ModuleTwoMark;
}
int Student::GetMark2() const {
	return ModuleTwoMark_;
}

void Student::SetMark3(int ModuleThreeMark) {
	ModuleThreeMark_ = ModuleThreeMark;
}
int Student::GetMark3() const {
	return ModuleThreeMark_;
}
