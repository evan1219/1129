#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void HW4()
{
	int  j, k, m, n, a, b, c, d;
	for (j = 1; j <= 4; j++)
	{
		for (k = 4; k >j; k--)
			cout << " ";
		for (m = 1; m <= k; m++)
		{
			if (m ==1)
				cout << "*";
			else
				cout << " ";
		}
		for (n = 2; n <= k; n++)
		{
			if (n == k)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	for (a = 0; a < 3; a++) 
	{
		for (b = 0; b <= a; b++)
			cout << " ";
		for (c = 0; c < 3 - a; c++)
		{
			if (c == 0) 
				cout << "*";
			else cout << " ";
		}
		for (d = 1; d < 3 - a; d++)
		{
			if (d ==3-b)	
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	system("pause");
}