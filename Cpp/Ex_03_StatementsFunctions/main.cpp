#include <iostream>

using namespace std;

// A function 'addition' that is called from main
int addition(int first_param, int second_param) {
	int result = first_param + second_param;
	return result;
}

// The main function
int main() {
	int first{5}; //A statement
	int second{7}; //A statement
	cout << endl << "First: " << first << endl;
	cout << "Second: " << second << endl;

	int sum = first + second; //Using the 'main' function
	cout << "Main Result is: " << sum << endl;
	cout << "Funct result is: " << addition(30, 10) << endl; //Using the 'addition' function
	return 0;
}
