#include <iostream>

using namespace std;

int main(){
	//Compile Error [no semi colon (producing errors further down the code)]
	cout << "Hello Sid!" << endl // << No ; after endl

		// Runtime Error [divide by 0 (will compile, but won't work)]
		int value = 7 / 0; //<< Divide by 0
	cout << "Value: " <<value << endl;


	return 0;
}
