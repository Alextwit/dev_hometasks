#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int x1, x2, y1, y2;
	cout << "enter first number(1..8): " << endl;
	cin >> x1;
	cout << "enter second number(1..8): " << endl;
	cin >> x2;
	cout << "enter first number(1..8): " << endl;
	cin >> y1;
	cout << "enter second number(1..8): " << endl;
	cin >> y2;
	if (((x1 >= 1) && (x1 <= 8)) && ((x2 >= 1) && (x2 <= 8)) && ((y1 >= 1) && (y1 <= 8)) && ((y2 >= 1) && (y2 <= 8))) {
		if (((abs(x1 - y1) == 2) && (abs(x2 - y2) == 1)) || ((abs(x1 - y1) == 1) && (abs(x2 - y2) == 2))) {
			cout << "they can" << endl;
		}
		else {
			cout << "they can not" << endl;
		}
		} 
	else {
		cout << "wrong numbers" << endl;
	}
	
	return 0;
}
