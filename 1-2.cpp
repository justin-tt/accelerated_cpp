#include <string>
int main() {
	const std::string exclam = "!";
	const std::string message = "Hello" + ", world" + exclam;
	// doesn't work because two const chars don't have the + operator, whereas
	// in problem 1-1 we have hello + ", world" which casts the concat
	// into a new string type instead of a const char type.
	// then left associative allows the string to + on "!"
}
