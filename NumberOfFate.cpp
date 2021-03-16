#include <iostream>

using namespace std;

int sumOfDateDigits (int year, int month, int day);
int sumOfDigits (int number);

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

int sumOfDigits (int number) {
	
	int n = 0;
	
	while (number != 0) {
		n += number % 10;
		number /= 10;
	}
	
	return n;
}
