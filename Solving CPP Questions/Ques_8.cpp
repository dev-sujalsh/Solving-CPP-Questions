#include <iostream>
using namespace std;

// Q8. Write a Program to Find the Largest Among 3 Numbers.
// Solution:

int main() {
	int a, b, c;
	cout << "Enter num 1 : ";
	cin >> a;
	cout << "Enter num 2 : ";
	cin >> b;
	cout << "Enter num 3 : ";
	cin >> c;

	if (a > b) {
		if (a > c)
			cout << "Num 1 : " << a << " is greatest";
		else
			cout << "Num 3 : " << c << " is greatest";
	}
	else if (b > c) {
		cout << "Num 2 : " << b << " is greatest";
	}
	else {
	cout << "Num 3 : " << c << " is greatest";
	}

}	