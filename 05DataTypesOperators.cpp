#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	 string operation;
	 double num1, num2;
	 
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operation (+, -, *, /): ";
	cin >> operation;
	cout << "Enter second number: ";
	cin >> num2;
	 
	if (operation == "+") {
		 cout << num1 + num2;
	} 
	else if (operation == "-") {
		cout << num1 - num2;
	} 
	else if (operation == "*") {
		cout << num1 * num2; 
	} 
	else if (operation == "/") {
		cout << num1 / num2;
    } else {
      cout << "That's not a recognized operation!";		
	}
     return 0;
}