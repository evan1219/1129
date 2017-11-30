#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void ex5()
{
	char *cName[] = { "Apple", "Orange", "Pear" };
	float fVal[] = { 1.1f, 12.21f, 123.321f };

	for (int i = 0; i < 3; i++) {
		cout << setiosflags(ios::left);
		cout.width(8); cout << cName[i];
		cout << resetiosflags(ios::left)
			<< setw(10) << fVal[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout.fill('*'); 
		cout << resetiosflags(ios::left); 
		cout.width(8); cout << cName[i];
		cout << setiosflags(ios::left);
		cout << setfill('^')  
			<< setw(10) << fVal[i] << endl;
	}
	system("pause");
}
