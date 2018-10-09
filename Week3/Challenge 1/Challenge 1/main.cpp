#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

	Student Johndoe;
	Johndoe.SetId("B12345");
	Johndoe.SetName("John Doe");

	std::string Id = Johndoe.GetId();
	std::string name = Johndoe.GetName();

	cout << "Student details" << Id << " " << name<< endl;

	return 0;
}