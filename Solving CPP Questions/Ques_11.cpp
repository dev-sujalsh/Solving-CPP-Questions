#include <iostream>
using namespace std;

// Q11. Write a Program to Check Whether a Number Is a Palindrome or Not.
// Solution : 

int main() {
	int num;
	cout << "Enter an number : ";
	cin >> num;
	int t = num;
	int rev = 0;

	for (; t > 0; t /= 10) {
		int dig = t % 10;
		rev = rev * 10 + dig;
	};

	if (rev == num)
		cout << "It's a Palindrome Number";
	else
		cout << "Not a Plaindrome Number";
}