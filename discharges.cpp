#include <iostream>

using namespace std;

int numberReversal (int enteredNumber);

int main () {
	
	int enteredNumber = 0;
	
	cout << "enter integer number: ";
	cin >> enteredNumber;
	
	cout << numberReversal(enteredNumber);
	
	return 0;
}

int numberReversal (int enteredNumber) {
	
	int currentDigit = 0;
	
	while (enteredNumber) {
		currentDigit = 10 * currentDigit + enteredNumber % 10;
		enteredNumber /= 10;
	}
	
	return currentDigit;
}
