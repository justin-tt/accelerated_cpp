#include <algorithm>
#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::sort; using std::vector;
using std::string; using std::streamsize; using std::setprecision;


int main() {
	cout << "Give me some values: ";
	vector<double> v;
	double value;
	while (cin >> value) {
		v.push_back(value);
	}
	
	sort(v.begin(), v.end());

	// can't do cout << v << " "; 
	// python is so much friendlier with the __str__ representation
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}
