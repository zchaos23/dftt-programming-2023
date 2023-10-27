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