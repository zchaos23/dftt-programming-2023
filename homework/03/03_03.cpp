/*
课程：程序设计_2023
课程作业：03_03
作业题目：03_03.cpp
输入一个正整数，计算其除以 7 的余数，根据余数 0-6 分别转换成“星期日/一/二/三/四/五/六” ，打印输出。
提示：使用 switch 语句。
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Please input an integer: ";
	cin >> a;

	switch (a%7) {
	case 0:
		cout << "星期日";
		break;
	case 1:
		cout << "星期一";
		break;
	case 2:
		cout << "星期二";
		break;
	case 3:
		cout << "星期三";
		break;
	case 4:
		cout << "星期四";
		break;
	case 5:
		cout << "星期五";
		break;
	case 6:
		cout << "星期六";
		break;
	}

	return 0;
}