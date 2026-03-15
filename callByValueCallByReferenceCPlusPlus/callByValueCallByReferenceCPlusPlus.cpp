#include <iostream>

using namespace std;

void callByValue(int value)					// Make some local processes with number's value.
{
	value = value * 2;
	cout << "value: " << value << endl;
}

void callByReference(int &value)			// Make some processes in number's memory, with its value.
{
	value = value * 2;
	cout << "value: " << value << endl;
}

int doubleValue(int value)					// int function can be used instead void, by assigning to variable 
{
	value = value * 2;
	cout << "value: " << value << endl;
	return value;
}

int main()
{
	int number = 5;
	int status;
	
	callByValue(number);				  
	cout << "number: " << number << endl;

	/*
	output:
	10
	5
	*/

	callByReference(number);				//insert number's address
	cout << "number: " << number << endl;

	/*
output:
10
10
*/

	status = doubleValue(number);			//can be used with int function
	cout << "status: " << status << endl;
	cout << "number: " << number << endl;

	/*
output:
20
20
10
*/
	return 0;
}