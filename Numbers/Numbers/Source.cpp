//Odd Milosz
//Even Milosz

#include <iostream> 

int main()
{
	int input = 0;
	std::cout << "Input a number of your choice: ";
	std::cin >> input;

	if (input % 2 == 1)
	{
		std::cout << "The number is odd" << std::endl;
	}

	return 1;
}