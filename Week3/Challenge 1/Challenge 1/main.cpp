#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

	Student Johndoe;
	Johndoe.printName = "John Doe";
	Johndoe.printName();

	cout << "Student details" << endl;

	return 0;
}