#include <iostream>
#include <cmath>

using namespace std;

double power();

double EnteringNumber, result = 1;
int PowerToCount;

int main () {
	
	cout << "enter num: ";
	cin >> EnteringNumber;
	cout << endl;
	cout << "enter power: ";
	cin >> PowerToCount;
	cout << endl;
	
	power ();
	
	cout << "Answer: " << result << endl;
	
	return 0;
}

double power(){
		
	if (PowerToCount >= 0) {
		for (int c = 0; c < PowerToCount; c++) {
			result *= EnteringNumber;
		}
	} else {
		for (int c = 0; c < abs(PowerToCount); c++) {
			result *= 1 / EnteringNumber;
		}
	}
	
}
