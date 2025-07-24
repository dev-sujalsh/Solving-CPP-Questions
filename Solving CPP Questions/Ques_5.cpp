#include <iostream>
using namespace std;

// Q5. Write a Program to Find the Size of int, float, double, and char.
// solution:

int main() {
	int num;
	float f_num;
	double d_num;
	char ch;

	cout << "Size of int " << sizeof(num) << endl;
	cout << "Size of float " << sizeof(f_num) << endl;
	cout << "Size of double " << sizeof(d_num) << endl;
	cout << "Size of char " << sizeof(ch) << endl;
}