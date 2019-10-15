// Worksheeet4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int arraysize, k, number;
	cout << "Enter the size of the array: ";
	cin >> arraysize;
	int* arrays = new int[arraysize];
	cout << "\nEnter the buffer size (k): ";
	cin >> k;
	int res[100];
	for (int i = 0; i < k; i++) {
		cout << "Enter a number: ";
		cin >> number;
		arrays[i] = number;
		res[i] = number;
	}
	
	for (int i= k; i < arraysize; i++) {
			
			int sum=0;
			for (int j = 1; j <= k; j++) {
				sum += res[i - j];
			}
			res[i] = sum;
	} 
	for (int i = 0; i < arraysize; i++) {
		if (i == arraysize - 1)
			cout << res[i] << endl;
		else
			cout << res[i] << ',';
		
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
