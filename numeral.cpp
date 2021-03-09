#include <iostream>

using namespace std;

int main() {
	int IntNumber = 0;
	double EnteredNumber;
    
	cout << "enter fractional number: ";
	cin >> EnteredNumber;
    
	if (EnteredNumber > 0) {
    		IntNumber = EnteredNumber;
		EnteredNumber -= IntNumber;
		IntNumber = EnteredNumber * 10;
		cout << "first fractional numeral is: " << IntNumber << endl;
	} else {
		cout << "number less than zero!" << endl;
	}
    
    return 0;
}
