#include <iostream>
#include <string>
#include <array>

using namespace std;

int totalNumbers(const int values[], int size);

int main() {


	int numbers[5];

	cout << "Insert five numbers" << endl;
	for (int i = 0; i < 5; ++i) {
		cin >> numbers[i];
	}

	float floatNums[10];

	cout << "The total of numbers was " << totalNumbers(numbers, arraysize) << endl;

	//Calculate the size og the array in bytes

	int arraysize = sizeof(numbers) / sizeof(numbers[0]);

	cout << "\nThe size of the array is " << arraysize << endl;


	std::getchar();
	return 0;
	
	

}


int totalNumbers(const int values[], int size) {
	int total{ 0 };
	int index;

	for (index = 0; index < size; index++) {
		total += values[index];
	}
	return total;
}
