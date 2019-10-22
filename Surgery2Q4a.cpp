#include <iostream>
using namespace std;

int main()
{
	int arr[10], inputnum, maxnum, minnum;
	int res[100];
	
	for (int i = 0; i < 10; i++) {
		cout << "Enter your 10 numbers: ";
		cin >> inputnum;
		arr[i] = inputnum;
		res[i] = inputnum;
	}
	maxnum = arr[0];
	for (int i = 0; i < 10; i++) {
		if (maxnum < arr[i]) {
			maxnum = arr[i];
		}
	}
	minnum = arr[0];
	for (int i = 0; i < 10; i++) {
		if (minnum > arr[i]) {
			minnum = arr[i];
		}
	}
	cout << "\nThe largest number is: " << maxnum;
	cout << "\nThe smallest number is: " << minnum;
}

