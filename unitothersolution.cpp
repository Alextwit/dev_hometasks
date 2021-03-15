#include <iostream>

using namespace std;

int chislo (int enteredNumber);

int main () {
	
	int enteredNumber = 0;
	
	cout << "enter last number: ";
	cin >> enteredNumber;
	
	chislo(enteredNumber);
	
	return 0;
}

int chislo (int enteredNumber) {
	
	int digit = 0;
	
	while (digit < enteredNumber) {
		digit = (2 * digit) + 1;
		cout << digit << " ";
	}
	
}
