#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "ex4.h"
using namespace std;
void ex4()
{
	int ix = 125;
	float fy = 12.345f;
	cout << "1234567890 字元個數對照用" << endl;
	cout.width(10); cout << ix << endl;
	cout << setw(10) << fy << endl;


	cout << "12345678901234567890" << endl;
	cout.width(10); cout << ix;
	cout.width(10); cout << fy << endl;
	cout << setw(10) << ix << setw(10) << fy << endl;
	cout << setw(10) << ix; cout.width(10); cout << fy << endl;
	system("pause");
}