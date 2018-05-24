#include <iostream>
#include <string>

int main(){
	{ std::string s = "a string";
	std::string x = s + ", really";
	std::cout << s << std::endl;
	std::cout << x << std::endl; // can't use x if it is destroyed once inner scope is closed
	}
	return 0;
}
