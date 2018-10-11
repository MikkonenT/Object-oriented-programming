#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main() {

	Student Jane{ "Jane Doe", "B12345", "computing", 3, 50 };

	Student Johndoe;
	Johndoe.SetId("B12345");
	Johndoe.SetName("John Doe");

	std::string Id = Johndoe.GetId();
	std::string name = Johndoe.GetName();

	cout << "Student details " << Id << " " << name << endl;


	std::getchar();
	return 0;
}