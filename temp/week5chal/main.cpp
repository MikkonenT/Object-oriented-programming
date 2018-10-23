//23.10.2018
//Teemu Mikkonen
//Week 5 Challenge 1

#include <iostream>
using namespace std;

void calculateGravity(float r, float& gravity);

int main() {

	//Initialise values

	float gravity{ -9.800665f };
	float speed{ 3.0f };
	float r;
	float* aPtr = { nullptr };
	float* bPtr = { nullptr };

	//Assignin pointers

	aPtr = &gravity;
	bPtr = &speed;

	//Ask user input 
	cout << "Enter your distance from the centre of the earth: ";
	cin >> r;


	calculateGravity(r, gravity);



	//Print the required information
	
	cout << "aPtr value: " << aPtr << endl;
	cout << "aPtr address: " << &aPtr << endl;
	cout << "aPtr dereference: " << *aPtr << endl;
	cout << "aPtr size: " << sizeof(aPtr) << endl;
	cout << endl;

	cout << "bPtr value: " << bPtr << endl;
	cout << "bPtr address: " << &bPtr << endl;
	cout << "bPtr dereference: " << *bPtr << endl;
	cout << "bPtr size: " << sizeof(bPtr) << endl;
	cout << endl;

	cout << "gravity value" << gravity << endl;
	cout << "gravity address: " << &gravity << endl;
	
	
	return 0;
}

void calculateGravity(float r, float& gravity){

	float R = 6731 + r;
	gravity = gravity * pow((6731 / R),2);
	cout << "The gravity on your location is " << gravity << endl;

}

