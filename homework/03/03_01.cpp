/*
课程：程序设计_2023
课程作业：03_01
作业题目：03_01.cpp
输入两个整数，比较两个数的大小，输出比较结果。
提示：使用 if else 语句。
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "please input number a, then input number b." << endl;
	cin >> a >> b;

	if (a > b) {
		cout << "number a is greater than b.";
	}
	else if (a == b) {
		cout << "number a is equal to b.";
	}
	else {
		cout << "number a is lower than b.";
	}

	return 0;
}