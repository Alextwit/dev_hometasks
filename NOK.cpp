#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0, i, x;
	
	cout << "enter first number: ";
	cin >> a;
	cout << "enter second number: ";
	cin >> b;
	
	for ( int i = 2; i < a && i < b; i++) {
		if ((a % i == 0) && (b % i == 0)) {
			cout << "NOK: " << i << endl;
			return 0;
		}
	}
	
	cout << "NOK does not exist" << endl;
	
	return 0;
}
