#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
	int DecimalValue = 0;
	int ValueInChar, ValueIndex, Degree;
	string BinaryNumber;
	
	cout << "enter BINARY number: " << endl;
	cin >> BinaryNumber;
	
	for (ValueIndex = 0, Degree = BinaryNumber.length() - 1; ValueIndex < BinaryNumber.length(), Degree >= 0; ValueIndex++, Degree--) {
		ValueInChar = BinaryNumber[ValueIndex] - 48;
		DecimalValue += ValueInChar *  pow(2, Degree);
	}
	cout << "the resulting DECIMAL value: " << DecimalValue << endl;
	
	return 0;
}
