/*
�γ̣��������_2023
�γ���ҵ��03_04
��ҵ��Ŀ��03_04.cpp
ʹ�� while ѭ���ṹ���� * ������Ļ�����������ͼ�Ρ�
��ʾ�������кſ�����Ҫ����Ŀո���ǺŸ�����
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