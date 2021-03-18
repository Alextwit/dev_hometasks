#include <iostream>

using namespace std;

int suitableNumbers (int enteredNumber);

int main () {
	
	int enteredNumber = 0;
	
	cout << "enter last number: ";
	cin >> enteredNumber;
	
	suitableNumbers(enteredNumber);
	
	return 0;
}

int suitableNumbers (int enteredNumber) {
	
	int digit = 0;
	
	while (digit < enteredNumber) {
		digit = (2 * digit) + 1;
		cout << digit << " ";
	}
	
}
