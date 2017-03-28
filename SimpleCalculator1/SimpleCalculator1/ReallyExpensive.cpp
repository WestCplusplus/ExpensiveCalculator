#include <iostream>
#include <string>

int main()
{
	int aFirst;
	int bSecond;
	int cAdd; 
	std:: string nameString;

	std::cout << "What is your name: ";
	std::cin >> nameString;

	std::cout << "Enter a number: ";
	std::cin >> aFirst;

	std::cout << "Enter a second number: ";
	std::cin >> bSecond;

	cAdd = aFirst + bSecond;

	std::cout << "The sum of " << aFirst << " + " << bSecond << " = " << cAdd << std::endl;
	return 0;

}