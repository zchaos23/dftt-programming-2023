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