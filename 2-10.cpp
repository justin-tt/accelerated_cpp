#include <iostream>

int main() {
int k = 0;
int n = 3;
	while (k != n) { // we have written k asterisks so far
		using std::cout;
		cout << "*";
		++k;
	}
	std::cout << std::endl; // std is required here because we didn't define
	// the namespace within this scope.
	return 0;

}
