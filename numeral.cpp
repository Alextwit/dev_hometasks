#include <iostream>

using namespace std;

int main() {
	int n = 0;
    double x;
    
    cout << "enter fractional number: ";
    cin >> x;
    
    if (x > 0) {
    	n = x;
		x -= n;
		n = x*10;
		cout << "first fractional numeral is: " << n << endl;
	} else {
		cout << "number less than zero!" << endl;
	}
    
    return 0;
}
