#include <iostream>
#include "task4.h"
using namespace std;
int main() {
	char *x = new char[100];
	cout << "Enter x:" << endl;
	cin >> x;
	char *y = new char[100];
	cout << "Enter y:" << endl;
	cin >> y;
	cout << sum(x, y)<<endl;

	char *xx = new char[100];
	char *yy = new char[100];
	cout << "Enter x:" << endl;
	cin >> xx;
	cout << "Enter y:" << endl;
	cin >> yy;
	cout<<sum(xx, yy);
}