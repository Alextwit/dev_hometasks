#include <iostream>

using namespace std;

int main() 
{
	double AttackingMutants, PercentPerDay, DestroyedPerDay, RestAfterFirstDay;
	int DaysToDestroy = 1;
	
	cout << "enter number of attacking mutants: " << endl;
	cin >> AttackingMutants;
	cout << "enter breeding percentage: " << endl;
	cin >> PercentPerDay;
	cout << "enter daily destruction: " << endl;
	cin >> DestroyedPerDay;
	
	RestAfterFirstDay = AttackingMutants - DestroyedPerDay;
	
	while (RestAfterFirstDay >= 0) {
		RestAfterFirstDay = ((RestAfterFirstDay + (RestAfterFirstDay * (PercentPerDay / 100))) - DestroyedPerDay);
		DaysToDestroy++;
		
	}
	
	cout << "all mutants will be destroyed in " << DaysToDestroy << " day(s)" << endl;
	
	return 0;
}
