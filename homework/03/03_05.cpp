/*
�γ̣��������_2023
�γ���ҵ��03_05
��ҵ��Ŀ��03_05.cpp
��� 200 - 300 ֮�������������
��ʾ��ʹ�� for ѭ����break ��䣬���� 2 ~ sqrt(n) ���ӣ��ж�ĳ�����ǲ���������
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