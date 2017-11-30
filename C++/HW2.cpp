#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void HW2()
{
	int  j, k, m, n,l;
	for (j = 1; j <= 7; j++)
	{
		for (k = 7; k > j; k--)
			cout << " ";
		for (m = 1; m <= k; m++)
		{
			if ((m < k)||(j==1))
				cout << "*";
			if ((m == k)&&(j>1))
				cout << " ";
		}
		for (n = 2; n <= k; n++)
			cout << "*";
		cout << endl;
	}
	system("pause");
}