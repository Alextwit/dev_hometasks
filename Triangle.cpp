#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int FirstSide = 0, SecondSide = 0, ThirdSide = 0;
	
	cout << "enter first side: ";
	cin >> FirstSide;
	cout << "enter second side: ";
	cin >> SecondSide;
	cout << "enter third side: ";
	cin >> ThirdSide;
	
	if (FirstSide == SecondSide && SecondSide == ThirdSide) {
		cout << "triangle is equilateral" << endl;
	} else if ((FirstSide == SecondSide && SecondSide != ThirdSide) || 
	(SecondSide == ThirdSide && SecondSide != FirstSide) || 
	(FirstSide == ThirdSide && ThirdSide != SecondSide)) {
		cout << "triangle is isosceles" << endl;
	} else if ((FirstSide == sqrt(pow(SecondSide, 2) + pow(ThirdSide, 2))) || 
	(SecondSide == sqrt(pow(FirstSide, 2) + pow(ThirdSide, 2))) || 
	(ThirdSide == sqrt(pow(FirstSide, 2) + pow(SecondSide, 2)))) {
		cout << "triangle is rectangular" << endl;
	} else {
		cout << "triangle is general view" << endl;
	}
	
	return 0;
}
