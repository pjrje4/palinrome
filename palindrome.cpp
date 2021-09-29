#include <iostream>
#include <cstring>
/*
 *Justin Iness
 *Guessing Game
 *Jason Galbraith
 *C++ Programming
 * */

using namespace std;

int main() //main loop
{
	char stringput[80];
	char stringput2[80];
	char reverse[80];

	cout << "Please enter a string to check if it is a palindrome:";

	cin.get (stringput, 80);
	cin.get();

	int count = 0;
	int count2 = 0;
	int len = strlen(stringput);

	for (int i=0; i<len;i++) {
		if (isalpha(stringput[i])) {
			stringput2[count] = tolower(stringput[i]);
			
			count++;
		}		
	}

	for (int f=count-1; f>=0; f--) {
		reverse[count2] = stringput2[f];
		count2++;
	}
	if (strcmp(reverse, stringput2) == 0) {
		cout << "Palindrome" << endl;
	}
	else {
		cout << "Not a palindrome" << endl;
	}
}
