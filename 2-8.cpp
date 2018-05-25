#include <iostream>

using std::cout;
using std::endl;

int main() {
	int i = 1;
	int product = 1;

	while (i < 10) {
		product *= i;
		++i;
	}
	cout << product << endl;

}
