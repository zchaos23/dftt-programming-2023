/*
�γ̣��������_2023
�γ���ҵ��03_03
��ҵ��Ŀ��03_03.cpp
����һ������������������� 7 ���������������� 0-6 �ֱ�ת���ɡ�������/һ/��/��/��/��/���� ����ӡ�����
��ʾ��ʹ�� switch ��䡣
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
		cout << "������";
		break;
	case 1:
		cout << "����һ";
		break;
	case 2:
		cout << "���ڶ�";
		break;
	case 3:
		cout << "������";
		break;
	case 4:
		cout << "������";
		break;
	case 5:
		cout << "������";
		break;
	case 6:
		cout << "������";
		break;
	}

	return 0;
}