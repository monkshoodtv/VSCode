#include <iostream>
#include <string>
using namespace std;


int main(){/*
	cout << "Hi Sid!..." << endl;

	int age{65};
	cout << "So - you're " << age << endl << endl;

	cerr << "cerr message, something wrong: " << endl;
	clog << "clog message, something happened: " << endl << endl;
*/

/*
//Data input and output
	int age1;
	string name;

	cout << endl << "Please enter your name and age. " << endl;
	//cin >> name;
	//cin >> age1;
	cin >> name >> age1;

	cout << endl << "Hi " << name << ". So... you're " << age1 << " years old." << endl << endl;
	*/
//Data input with spaces

	string fullName;
	int age3;
	cout << "Please entre your full name followed by enter, then your age." << endl;

	getline(cin,fullName);
	cin >> age3;

	cout << endl
	<< "Hi " << fullName << ". So... you're " << age3 << " years old." << endl
	<< endl;

	return 0;
}
