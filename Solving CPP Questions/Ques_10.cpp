#include <iostream>
using namespace std;

// Q10. Write a Program to Check Whether a Number Is Prime or Not.
// Solution:

int main() {
	int num;
	cout << "Enter an Number : ";
	cin >> num;

	bool flag = 0;
	
	for (int i = 2; num > i; i++) {
		if (num % i == 0) {
			cout << num << " is Not a prime number";
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << num << " is a Prime number";
	}

}