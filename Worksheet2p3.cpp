// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
	int exam;
	int cw;
	int cap;
	int a;
	float final;

	cout << "Please enter your coursework mark: ";
	cin >> cw;
	while (cw < 0, cw > 100) {
		cout << "Invalid Input" << "\nPlease enter a valid number: ";
		cin >> cw;
	}
	cout << "\nPlease enter your exam mark: ";
	cin >> exam;
	while (exam < 0, exam > 100) {
		cout << "Invalid Input" << "\nPlease enter a valid number: ";
		cin >> exam;
	}






	cap = 2 * exam;
	if (cap < 50) {
		cap = 50;
	}
	else if (50 <= cw <= cap) {
		cw = cw;
	}
	if (cw < cap) {
		a = cw;
	}
	else if (cap < cw) {
		a = cap;
	}
	final = (0.4 * a) + (0.6 * exam);

	if (final > 50) {
		cout << "Your module mark is " << final;
		cout << "\nCongratulations, you have passed";
	}
	else {
		cout << "Your module mark is " << final;
		cout << "\nUnfortunately, you have not passed";
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
