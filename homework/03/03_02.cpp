/*
�γ̣��������_2023
�γ���ҵ��03_02
��ҵ��Ŀ��03_02.cpp
����һ���������������������������������λ����
��ʾ��ʹ�� do while ��䡣
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