#include <iostream>
using namespace std;

int main(){

	int num1 = 15;			//Decimal (as seen)
	int num2 = 017;			//Octal (has leading 0)
	int num3 = 0x0f;		//Hex (has leading 0x)
	int num4 = 0b00001111;	//Binary (has leading 0b)

	cout << endl << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl << endl;

	return 0;
}
