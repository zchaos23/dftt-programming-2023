/*
课程：程序设计_2023
课程作业：03_06
作业题目：03_06.cpp Bonus 1
求一元二次方程 ax² + bx + c = 0 的根。
输入：三个 double 类型对象 a、b、c
输出：判定 a 是否为 0 / 无实根 / 两个相同实根 / 两个不同实根
提示：
*/

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, delta;
	cout << "Please input a, b, c." << endl;
	cin >> a >> b >> c;

	if (a == 0) {
		cout << "Number a cannot be zero." << endl;
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			cout << "The equation has two distinct real roots: " << ( -b + sqrt(delta)) / (a * 2) << ", " << (-b - sqrt(delta)) / (a * 2) << "." << endl;
		}
		else if (delta == 0) {
			cout << "The equation has two equal real roots: " << (-b + sqrt(delta)) / (a * 2) << "." << endl;
		}
		else {
			cout << "The equation has no real roots." << endl;
		}
	}

	return 0;
}