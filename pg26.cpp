// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main()
{
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;

	// build the message that we intend to write
	const std::string greeting = "Hello, " + name + "!";
	
	// build the second and fourth lines of the output
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	// build the first and fifth lines of the output
	const std::string first(second.size(), '*');

	// write it all
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;


	std::string a (10, 'a');
	std::cout << a << std::endl;
	std::cout << std::string(10, 'b') << std::endl;
	std::cout << (10, 'c') << std::endl;
	
	std::string s = "s";
	std::string r = "r";

	std::cout << s + "iaasdf" << std::endl;
	std::cout << s + r << std::endl;

	const std::string doublein;
	// std::cin >> s >> doublein; // can't seem to work
	std::cout << doublein << std::endl;

	return 0;
}
