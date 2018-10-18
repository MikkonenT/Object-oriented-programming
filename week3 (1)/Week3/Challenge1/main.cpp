#include <iostream>
#include <string>
#include "student.h"
#include "module.h"

//using namespace std;

int main() {

	//Student Jane{ "Jane Doe", "B12345", "computing", 3, 5, 20, 20, 20};

	Student Billy{ "Billy Bragg", "B00578985", "Music Theory", 3, 5, 87, 92, 47 };
	/*
	Student Johndoe;
	Johndoe.SetId("B12345");
	Johndoe.SetName("John Doe");

	std::string Id = Johndoe.GetId();
	std::string name = Johndoe.GetName();

	cout << "Student details " << Id << " " << name << endl;*/
	std::cout << "" << std::endl;

	Module Cpp{ "Cplusplus", "COM1234", 25, 60 };


	std::getchar();
	return 0;
}