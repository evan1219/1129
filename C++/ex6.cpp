#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void ex6()
{
	float fVal[] = { 1.1f, 12.21f, 123.321f, 1234.4321f };
	cout << "��l�ƭ�"; cout << setprecision(8); 
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << " 3�Ӧr��"; cout << setprecision(3); 
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << "�T�w����"; cout << setiosflags(ios::fixed);
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	cout << resetiosflags(ios::fixed);
	cout << "��ǰO��"; cout << setiosflags(ios::scientific);
	for (int i = 0; i < 4; i++) cout << setw(12) << fVal[i];
	cout << endl;
	system("pause");
}
