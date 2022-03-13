#include <iostream>

using namespace std;

void swap(int &x,int &y){
	int temp = x;
	x = y;
	y = temp;
	cout << x << endl;
}
int x = 0;
int y = 10;
swap(x, y);
