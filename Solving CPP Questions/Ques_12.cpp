#include <iostream>
using namespace std;

// Q12. Write a Program to Make a Simple Calculator.
// Solution : 

int main() {
	int Num1, Num2;
	cout << "Enter Number 1 : ";
	cin >> Num1;
	cout << "Enter Number 2 : ";
	cin >> Num2;

	cout << "NOTE : Enter -> \n '+' for Addition \n '-' for Subtraction \n '*' for Multiplication \n '/' for Division" << endl;
	char ch;
	cout << "Opertor : ";
	cin >> ch;

	int result;

	if (ch == '+') {
		result = Num1 + Num2;
		cout << result;
	}
	else if (ch == '-') {
		result = Num1 - Num2;
		cout << result;
	}
	else if (ch == '*') {
		result = Num1 * Num2;
		cout << result;
	}
	else if (ch == '/') {
		result = Num1 / Num2;
		cout << result;
	}
	else {
		cout << "Invalid Operator";
	}

}	
