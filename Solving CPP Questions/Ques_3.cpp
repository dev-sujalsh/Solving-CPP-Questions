#include <iostream>
using namespace std;

// Q3. Write a Program to Print the ASCII Value of a Character.
// Solution:

int main() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	int acsiiValue = int(ch);

	cout << "The ASCII value of '" << ch << "' is: " << acsiiValue << endl;
}