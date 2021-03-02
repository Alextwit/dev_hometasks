#include <iostream>

using namespace std;

int main() 
{
	double m, p, n, days, rest;
	days = 1;
	
	cout << "enter number of attacking mutants: " << endl;
	cin >> m;
	cout << "enter breeding percentage: " << endl;
	cin >> p;
	cout << "enter daily destruction: " << endl;
	cin >> n;
	
	rest = m - n; //  ostatok posle pervogo dnya
	
	while (rest >= 0) {
		rest = ((rest + (rest * (p / 100))) - n);
		days++;
		
	}
	
	cout << "all mutants will be destroyed in " << days << " day(s)" << endl;
	
	return 0;
}
