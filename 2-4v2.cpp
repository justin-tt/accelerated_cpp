#include <iostream>
#include <string>

using std::cin;	using std::endl;
using std::cout; using std::string;

int main()
{
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// the number of blanks surrounding the greeting
	const int pad = 3;

	// build the message that we intend to write
	const string greeting = string(pad, ' ') + "Hello, " + name + "!" + string(pad, ' ');

	// total number of rows and columns to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + 2;
	
	// build the blank row
	string blanks(greeting.size(), ' ');

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r) {

		string::size_type c = 0;

		// invariant: we have written c cols so far in the current row
		while (c != cols) {

			// are we on the border?
			if (r == 0 || r == rows - 1 ||
				c == 0 || c == cols - 1) {
				// testing unicode strings
				cout << "\u256C";
				++c;
			}

			// is it time to write the greeting?
			else if (r == pad + 1) {
				cout << greeting;
				c += greeting.size();
			} else {
				// are we about to write a line of blanks (without padding?)
				cout << blanks;
				c += blanks.size();
			}
		}

		cout << endl;
	}

	return 0;
}
