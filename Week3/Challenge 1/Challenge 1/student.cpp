#include <iostream>
#include <string>
#include "Student.h"

//Non-default constructor
/*Student::Student(std::string name) {
	:name_{name}

}*/





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

//Module marks

