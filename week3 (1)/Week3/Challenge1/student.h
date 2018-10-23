#pragma once
#include <iostream>
#include <string>
#include <vector>

class Student {
	//Data members private
private:
	std::string ID_, name_, course_;
	int year_, credits_;
	std::vector<int> marks_;


public:

	//Default constructor
	Student();

	//Custom constructor1 
	explicit Student(std::string name);


	//Custom constructor2
	Student(std::string name, std::string ID, std::string course, int year, int credits, std::vector<int> marks);

	//Getters and setters
	void SetName(std::string name);
	std::string GetName() const;

	void SetId(std::string  ID);
	std::string GetId() const;

	void SetYear(int year);
	int GetYear() const;

	void SetCourse(std::string course);
	std::string GetCourse() const;

	void SetMarks(std::vector<int> marks);
	std::vector<int> GetMarks() const;

};