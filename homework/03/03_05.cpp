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