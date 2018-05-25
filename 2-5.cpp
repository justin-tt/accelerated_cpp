#include <iostream>
#include <string>

using std::cin;	using std::cout;
using std::string; using std::endl;

int main() {
	
	const int squareLength = 3;
	for (int row = 0; row < squareLength; row++) {
		for (int col = 0; col < squareLength; col++) {
			if (row == 0 || col == 0 || row == squareLength - 1 || col == squareLength - 1) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;

	const int rectangleLength = 3;
	const int rectangleBreadth = 5;
	for (int row = 0; row < rectangleBreadth; row++) {
		for (int col = 0; col < rectangleLength; col++) {
			if (row == 0 || col == 0 || row == rectangleBreadth - 1 || col == rectangleLength - 1) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl;
	
	const int rightTriangleLength = 5;

	for (int row = 0; row < rightTriangleLength; row++) {
		for (int col = 0; col < row + 1; col++) {
			if (col == 0 || col == row || row == 0 || row == rightTriangleLength - 1) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
