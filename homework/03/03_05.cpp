/*
课程：程序设计_2023
课程作业：03_05
作业题目：03_05.cpp
输出 200 - 300 之间的所有质数。
提示：使用 for 循环、break 语句，遍历 2 ~ sqrt(n) 因子，判断某个数是不是质数。
*/

#include <iostream>
using namespace std;

int main()
{
	for (int n = 200; n <= 300; ++n) {
		bool isPrime = true;

		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime == true) {
			cout << n << endl;
		}
	}

	return 0;
}