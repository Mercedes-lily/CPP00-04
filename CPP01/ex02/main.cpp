#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "\033[0;35mstr Adress : " << &str << std::endl;
	std::cout << "\033[0;33mstringPTR Adress : " << stringPTR << std::endl;
	std::cout << "\033[0;32mstringREF Adress : " << &stringREF << std::endl;

	std::cout << "\033[0;35mstr Value : " << str << std::endl;
	std::cout << "\033[0;33mstringPTR Value : " << *stringPTR << std::endl;
	std::cout << "\033[0;32mstringREF Value : " << stringREF << std::endl;
}