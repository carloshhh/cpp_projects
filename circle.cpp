/*
	Program to calculate the area of a circle
	with function loop 
*/

#include <iostream>
#include <math.h>

using namespace std;

const float PI = 3.14;

int main()
{
	double raio;
	cout << "Program to calculate da area of a circle" << endl;
	cout << "Enter the raio number: ";
	
	cin >> raio;
	
	if (raio == 0)
	{
		cout << "\nThe number is equal 0";
		return 0;
	}
	
	double area = PI * pow(raio, 2);
	
	cout << "\nThe area is: " << area << endl << endl;
	
	main();
	
	return 0;
}
