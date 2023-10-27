/*
课程：程序设计_2023
课程作业：03_02
作业题目：03_02.cpp
输入一个整数，反向输出该整数，最后输出它的位数。
提示：使用 do while 语句。
*/

#include <iostream>
using namespace std;

int main()
{
	int a, count = 0;
	cout << "Please input an integer: ";
	cin >> a;

	cout << "Reversed interger is: ";

	do {
		cout << a % 10;
		a = a / 10;
		count++;
	} while (a != 0);

	cout << endl << "Number of digits are: " << count;

	return 0;
}