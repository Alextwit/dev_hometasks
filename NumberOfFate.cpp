#include <iostream>

using namespace std;

int sumOfDigits (int enteredNumber);

int main () {
	
	int year = 0, month = 0, day = 0;
	
	cout << "enter year of birth: ";
	cin >> year;
	cout << "enter month of birth: ";
	cin >> month;
	cout << "enter day of birth: ";
	cin >> day;
	
	cout << sumOfDigits(year) + sumOfDigits(month) + sumOfDigits(day);
	
	return 0;
}

int sumOfDigits (int enteredNumber) {
	
	int digitsSum = 0;
	
	while (enteredNumber != 0) {
		digitsSum += enteredNumber % 10;
		enteredNumber /= 10;
	}
	
	return digitsSum;
}
