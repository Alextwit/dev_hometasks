#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	int result = 0;
	int s, i, n;
//	s = from char to int
//	i = value index
//	n = power of two
	string num;
	cout << "enter BINARY number: " << endl;
	cin >> num;
	for (i = 0, n = num.length() - 1; i < num.length(), n >= 0; i++, n--) {
		s = num[i] - 48;
		result += s *  pow(2, n);
	}
	cout << "the resulting DECIMAL value: " << result << endl;
	
	return 0;
}
