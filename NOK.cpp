#include <iostream>

using namespace std;

int main() {
	int FirstNumber = 0, SecondNumber = 0, LeastCommonMultiple;
	
	cout << "enter first number: ";
	cin >> FirstNumber;
	cout << "enter second number: ";
	cin >> SecondNumber;
	
	for (LeastCommonMultiple = 2; LeastCommonMultiple < FirstNumber && LeastCommonMultiple < SecondNumber; LeastCommonMultiple++) {
		if ((FirstNumber % LeastCommonMultiple == 0) && (SecondNumber % LeastCommonMultiple == 0)) {
			cout << "Least common multiple: " << LeastCommonMultiple << endl;
			return 0;
		}
	}
	
	cout << "NOK does not exist" << endl;
	
	return 0;
}
