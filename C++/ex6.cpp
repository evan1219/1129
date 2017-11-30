#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void ex6()
{
	float fVal[] = { 1.1f, 12.21f, 123.321f, 1234.4321f };
	cout << "原始數值"; cout << setprecision(8); 
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << " 3個字元"; cout << setprecision(3); 
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << "固定長度"; cout << setiosflags(ios::fixed);
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << resetiosflags(ios::fixed);
	cout << "科學記號"; cout << setiosflags(ios::scientific);
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	system("pause");
}
