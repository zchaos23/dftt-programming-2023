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