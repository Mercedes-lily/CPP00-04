#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		for(int i = 0; argv[i]; i++)
		{
			for(int j = 0; argv[i][j]; j++)
				std::cout << toupper(argv[j]) ;
		}
	}
	std::cout << std::endl;
}