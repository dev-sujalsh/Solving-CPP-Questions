#include <iostream>
using namespace std;

// Q7. Write a Program to Check Even or Odd Integers.
// Solution:

void EvenOrOdd(int a) {
	if (a % 2 == 0)
		cout << "It's an Even no.";
	else
		cout << "It's an Odd no.";
}

int main() {
	int num;
	cout << "Enter an Number : ";
	cin >> num;

	EvenOrOdd(num);

}