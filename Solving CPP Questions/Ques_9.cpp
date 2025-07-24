#include <iostream>
#include <string>
using namespace std;

// Q9. Write a Program to Check if a Given Year Is a Leap Year.
// Solution:

int main() {
	int year;
	cout << "Enter an year : ";
	cin >> year;
	
	if (year % 400 == 0) {
		cout << year << " is a leap year";
	}
	else if (year % 100 == 0) {
		cout << year << " is not a leap year";
	}
	else if (year % 4 == 0) {
		cout << year << " is a leap year";
	}
	else {
		cout << year << " is not a leap year";
	}

}