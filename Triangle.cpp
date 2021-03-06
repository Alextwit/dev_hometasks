#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x1 = 0, x2 = 0, x3 = 0;
	
	cout << "enter first number: ";
	cin >> x1;
	cout << "enter second number: ";
	cin >> x2;
	cout << "enter third number: ";
	cin >> x3;
	
	if (x1 == x2 && x2 == x3) {
		cout << "triangle is equilateral" << endl;
	} else if ((x1 == x2 && x2 != x3) || (x2 == x3 && x2 != x1) || (x1 == x3 && x3 != x2)) {
		cout << "triangle is isosceles" << endl;
	} else if ((x1 == sqrt(pow(x2, 2) + pow(x3, 2))) || (x2 == sqrt(pow(x1, 2) + pow(x3, 2))) || (x3 == sqrt(pow(x1, 2) + pow(x2, 2)))) {
		cout << "triangle is rectangular" << endl;
	} else {
		cout << "triangle is general view" << endl;
	}
	
	return 0;
}
