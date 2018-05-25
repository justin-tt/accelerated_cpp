#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "Enter a number: ";
	int num1;
	cin >> num1;


	cout << endl;
	cout << "Enter another number: ";
	int num2;
	cin >> num2;

	if (num1 == num2) {
		cout << "Numbers are equal." << endl;
	} else if (num1 > num2) {
		cout << "The first number is bigger than the second number." << endl;
	} else {
		cout << "The second number is bigger than the first number." << endl;
	}
}
