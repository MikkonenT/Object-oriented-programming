#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {

	array<int, 8> a1;
	array<int, 5> a2;

	int a3[8];
	int a4[5];

	int index;

	/*for (index = 0; index < a1.size(); index++){
		a2[index] = a1[index];
	}*/

#ifndef NDEBUG
	if (a3 == a4) {
		cout << "Arrays are equal" << endl;
	}
	else {
		cout << "Arrays are not equal" << endl;
	}
#endif // !NDEBUG
	std::getchar();

	return 0;
}