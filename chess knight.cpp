#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int FirstCoorOfFirstKnight, SecondCoorOfFirstKnight, FirstCoorOfSecondKnight, SecondCoorOfSecondKnight;
	
	cout << "Enter coordinates of two chess knights" << endl;
	cout << endl;
	cout << "enter the first coordinate of the first chess knight: " << endl;
	cin >> FirstCoorOfFirstKnight;
	cout << "enter the second coordinate of the first chess knight: " << endl;
	cin >> SecondCoorOfFirstKnight;
	cout << "enter the first coordinate of the second chess knight: " << endl;
	cin >> FirstCoorOfSecondKnight;
	cout << "enter the second coordinate of the second chess knight: " << endl;
	cin >> SecondCoorOfSecondKnight;
	
	if (((FirstCoorOfFirstKnight >= 1) && (FirstCoorOfFirstKnight <= 8)) && ((SecondCoorOfFirstKnight >= 1) && 
	(SecondCoorOfFirstKnight <= 8)) && ((FirstCoorOfSecondKnight >= 1) && (FirstCoorOfSecondKnight <= 8)) && 
	((SecondCoorOfSecondKnight >= 1) && (SecondCoorOfSecondKnight <= 8))) {
		if (((abs(FirstCoorOfFirstKnight - FirstCoorOfSecondKnight) == 2) && 
		(abs(SecondCoorOfFirstKnight - SecondCoorOfSecondKnight) == 1)) || 
		((abs(FirstCoorOfFirstKnight - FirstCoorOfSecondKnight) == 1) && 
		(abs(SecondCoorOfFirstKnight - SecondCoorOfSecondKnight) == 2))) {
			cout << "they can beat each other" << endl;
		}
		else {
			cout << "they can not beat each other" << endl;
		}
	} else {
		cout << "wrong numbers" << endl;
	}
	
	return 0;
}
