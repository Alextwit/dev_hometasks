#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int num = 0, x;
	
	srand(time(NULL));
	x = rand() % 100;
	
	cout << "it is a game GUESS THE NUMBER" << endl;
	cout << "Computer thought of a number, try to guess it^^" << endl;
			
	while (num != x) {
		cout << "enter the number: ";
		cin >> num;
		if (num < x) {
			cout << "number is greater, try again" << endl;
		} else if (num > x) {
			cout << "number is less, try again" << endl;
		} if (num == x) {
			cout << "you guessed" << endl;
			break;
		}
	}
	
	return 0;
}
