/*
课程：程序设计_2023
课程作业：03_04
作业题目：03_04.cpp
使用 while 循环结构，用 * 号在屏幕上输出金字塔图形。
提示：根据行号控制需要输出的空格和星号个数。
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0, layer;

	cout << "Please input number of pyramid layers: ";
	cin >> layer;

	while (a != layer) {
		for (int i = a; i < layer-1; ++i) {
			cout << " ";
		}
		for (int i = 0; i < a*2+1; i++) {
			cout << "*";
		}
		cout << endl;

		a++;
	}

	return 0;
}