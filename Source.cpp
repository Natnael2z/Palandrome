#include <iostream>
#include <string>
#include<cctype>

using namespace std;

bool isSkipChar(char c);


int main() {
	string input;
	int i = 0;
	int j = 0;
	bool isPalindrome = true;


	cout << "Enter a possible Palindrome: ";
	getline(cin, input);
	j = input.length() - 1;

	while ((i < j) && isPalindrome) {
		
			if (isSkipChar(input[i] == ' '))
				i++;
			else if (isSkipChar(input[j] == ' '))
				j--;
			else {
				isPalindrome = (toupper (input[i]) == toupper (input[j]));
				i++; j--;
			}
	}
	if (isPalindrome) {cout << "yes" << endl;}
	else { cout << "No" << endl; }

	return 0;
}
bool isSkipChar(char c) {
	return(ispunct(c) || isspace(c) || iscntrl(c));
}