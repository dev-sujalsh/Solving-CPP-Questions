#include <iostream>
using namespace std;

// Q4. Write a Program to Swap Two Numbers.
// Solution:

int main() {
	int num1, num2, num3;

	num1 = 10;
	num2 = 20;
	cout << "Before swapping:" << endl;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl << endl;

	cout << "After swapping:" << endl;
	num3 = num1; // num3 = 10
	num1 = num2; // num1 = 20
	num2 = num3; // num2 = 10

	cout << "num1: " << num1 << endl; 
	cout << "num2: " << num2 << endl; 

}