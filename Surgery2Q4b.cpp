#include <iostream>
#include <limits>
using namespace std;

int main()
{
	int * arr= new int[10], inputnum, maxnum, minnum;
	int res[100];
	int k=0;
	
	for (int i = 0; i < 10; i++) {
		cout << "Enter your 10 numbers: ";
		cin >> inputnum;
		if (cin.fail()) {
			cin.clear();
			break;
		}
		else {
			arr[i] = inputnum;
			res[i] = inputnum;
			k++;
		}
		
	}
	maxnum = arr[0];
	for (int i = 0; i < k; i++) {
		if (maxnum < arr[i]) {
			maxnum = arr[i];
		}
	}
	minnum = arr[0];
	for (int i = 0; i < k; i++) {
		if (minnum > arr[i]) {
			minnum = arr[i];
		}
	}
	cout << "\nThe largest number is: " << maxnum;
	cout << "\nThe smallest number is: " << minnum;
	for (int i = 0; i < k; i++) {
		cout << "\n" << arr[i];
	}
}

