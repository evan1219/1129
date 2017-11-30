#include<iostream>
#include<stdlib.h>
extern void ex1();
extern void ex2();
extern void ex3();
extern void ex4();
extern void ex5();
extern void ex6();
extern void ex7();
extern void HW1();
extern void HW2();
extern void HW3();
extern void HW4();
using namespace std;
int main(void)
{
	int input;
	do {
		system("cls");
		cout << "1.第一個C++程式" << endl;
		cout << "2.命名空間(namespace)" << endl;
		cout << "3.bool 型別與 C++ 的關鍵字" << endl;
		cout << "4.輸出寬度(Output Width)" << endl;
		cout << "5.對齊方式(Alignment)" << endl;
		cout << "6.設定精確度(Precision)" << endl;
		cout << "7.輸入" << endl;
		cout << "8. HW1" << endl;
		cout << "9. HW2" << endl;
		cout << "10.HW3" << endl;
		cout << "11.HW4" << endl;
		cout << "---------------------------------" << endl;
		cout << "請輸入要執行的程式(輸入0結束):" << endl;
		cin >> input;
		while (getchar() != '\n')
			;
		switch (input)
		{
		case 0:
			break;
		case 1:
			ex1();
			break;
		case 2:
			ex2();
			break;
		case 3:
			ex3();
			break;
		case 4:
			ex4();
			break;
		case 5:
			ex5();
			break;
		case 6:
			ex6();
			break;
		case 7 :
			ex7();
			break;
		case 8:
			HW1();
			break;
		case 9:
			HW2();
			break;
		case 10:
			HW3();
			break;
		case 11:
			HW4();
			break;
		}
	} while (input != 0);
}
