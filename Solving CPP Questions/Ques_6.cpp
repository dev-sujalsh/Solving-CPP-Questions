#include <iostream>
#include <math.h>
using namespace std;

// Q6. Write a Program to Find Compound Interest.
// solution:

int main() {
	double principal{};
	double time{};
	double rate{};
	double amount;

	cout << "Enter Principal : ";
	cin >> principal; // taking Principal from user

	cout << "Enter Rate : ";
	cin >> rate; // taking rate from user

	cout << "Enter Time : ";
	cin >> time; // taking time form user

	amount = principal * pow((1 + rate / 100), time); // finding amount

	double CI = amount - principal; // finding Compound Interest

	cout << "Compound Interest for above figures is : " << CI;
}