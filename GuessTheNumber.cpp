#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int EnteredNumber = 0, HiddenNumber = 0;
	
	srand(time(NULL));
	HiddenNumber = rand() % 100;
	
	cout << "it is a game GUESS THE NUMBER" << endl;
	cout << "Computer thought of a number, try to guess it^^" << endl;
			
	while (EnteredNumber != HiddenNumber) {
		cout << "enter the number: ";
		cin >> EnteredNumber;
		if (EnteredNumber < HiddenNumber) {
			cout << "number is greater, try again" << endl;
		} else if (EnteredNumber > HiddenNumber) {
			cout << "number is less, try again" << endl;
		} if (EnteredNumber == HiddenNumber) {
			cout << "you guessed, grats" << endl;
			break;
		}
	}
	
	return 0;
}
