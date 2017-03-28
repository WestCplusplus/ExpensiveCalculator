#include <iostream>
#include <string>
using namespace std;

int a;

int main()
{

	int aFirst, bSecond, cAdd;
	string nameString;
	cout << "What is your name: ";
	cin >> nameString;

	cout << "Enter a number: ";
	cin >> aFirst;

	cout << "Enter a second number: ";
	cin >> bSecond;

	cAdd = aFirst + bSecond;
	

	cout << aFirst << " and " << bSecond << " = " << cAdd << endl;
	cout << "The End" << endl;
	

}