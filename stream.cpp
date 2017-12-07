/*
		Working with Input/Output streams
*/

#include <iostream>

using namespace std;

int main()
{
	double a, b;
	
	cout << "Enter a number: ";
	cin >> a;
	cin.ignore(100, '.'); // ignore the first 100 inputs while not find the dot
	cin >> b;
	
	cout << "\nThe b number is: " << b << endl;
	cout << "The a number is: " << a << endl;
	
	char c, d;
	
	cout << "Enter a character: ";
	cin.get(c); // get one character from the input
	cin.ignore(4, ','); // ignore the first 4 inputs while not find the ,
	cin.get(d);
	
	cout << "\nThe d char is: " << d << endl;
	cout << "The c char is: " << c << endl;
	
	return 0;
}
