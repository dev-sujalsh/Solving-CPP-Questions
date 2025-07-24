#include <iostream>
using namespace std;

// Q7. Write a Program to Check Even or Odd Integers.
// Solution:

void EvenOrOdd(int a) {
	if (a % 2 == 0)
		cout << a << " is an Even number";
	else
		cout << a << " is an Odd number";
}

int main() {
	int num;
	cout << "Enter an Number : ";
	cin >> num;

	EvenOrOdd(num);

}