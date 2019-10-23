#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//creating the database for the reverse of letters and stuff
	char setofmirrors[22] = {'A', 'J' ,'E','L', 'H', 'M', 'I', 'O', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '5', '8'};

	//letting using enter the string
	string enteredstring;
	cout << "Please enter your string (in capitals): "<< endl;
	cin >> enteredstring;
	//turning the enteredstring into an array
	int x = enteredstring.length();
	//declaring char array
	char* char_array = new char[x];
	//copying string to char array
	strcpy(char_array, enteredstring.c_str());
	/*printing out string
	for (int i = 0; i < x; i++) {
		cout << char_array[i];
	}*/

	//checking if string is mirrored
	for (int i = 0; i <= x; i++) {
		if (char_array[i] == setofmirrors[i]) {
			cout << "This is a mirror string" << endl;
		}
	}
	//checking if it is a palindrome
	if (enteredstring == string(enteredstring.rbegin(), enteredstring.rend())) {
		cout << enteredstring << " is a regular palindrome" << endl;
	}
	else{
		cout << enteredstring << " is not a palindrome" << endl;
	}
	for (int i = 0; i <= x; i++) {
		if (enteredstring == string(enteredstring.rbegin(), enteredstring.rend()) && char_array[i] == setofmirrors[i]) {
			cout << "This is a mirror palindrome";
		}
	
	}
}
