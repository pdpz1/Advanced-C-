// Worksheet3p3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 1;
	int num_next = 0;
	int x;
	cout << "Please enter a number: ";
	cin >> x;
	for (int i = 1; i < x; ++i) {
		if (x == 1) {
			cout << "\n" << num1;
		}
		if (x == 2) {
			cout << "\n" << num2;
		}

		
		num_next = num1 + num2;
		num1 = num2;
		num2 = num_next;

		cout << "\n" << num_next;
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
