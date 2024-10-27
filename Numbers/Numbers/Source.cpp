//Even Milosz

#include <iostream> 

int main()
{
	int input = 0;

	std::cout << "Please input a number: ";
	std::cin >> input;

	if (input % 2 == 0)
	{
		std::cout << "The number is even." << std::endl;
	}

	return 1;
}