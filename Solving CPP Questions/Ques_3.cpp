#include <iostream>
using namespace std;

int main() {
	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	int acsiiValue = int(ch);

	cout << "The ASCII value of '" << ch << "' is: " << acsiiValue << endl;
}