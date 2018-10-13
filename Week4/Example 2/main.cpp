#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

class A {
	int num_;
public:
	int GetNum() const {return num_; }
	void SetNum(int num) { num_ = num; }
};

int main() {

	int index;
	array <float, 3> arrayOfFloats{ 2.0f, 3.4f };
	array <A, 3> objects; 


	//Introduction to sd::vector class

	//break the array - assign out of bounds

	
	vector<int> items1(4);
	vector<int> items2{ 1, 32, 23, 32, 45, 66, 43, 77 };
	vector<int> items3;

	items3 = items2;
	if (items3 == items2){
		cout << "The vectors are the same" << endl;
	}

	cout << "The size of items3 vector is " << items3.size() << endl;

	cout << "The contents of items3 vector are " << endl;

	for (index = 0; index < items3.size(); index++) {
		cout << items3.at(index) << endl;
	}



	/*Introduction to std::array clas
	cout << "The contents of the array of floats is " << endl;
	for (index = 0; index < arrayOfFloats.size(); index++)
		cout << arrayOfFloats[index] << " " << endl;

	for (index = 0; index < objects.size(); index++) {
		objects[index].SetNum(index);
	}
	
	cout << "The contents of the objects array is " << endl;
	for (index = 0; index < objects.size(); index++) {
		A tempA = objects[index];
		cout << tempA.GetNum() << " ";
	}
	*/
	std::getchar();

	return 0;
}