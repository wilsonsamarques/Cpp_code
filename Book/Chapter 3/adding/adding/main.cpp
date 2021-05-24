#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	int n = 0;

	do {
		cout << "Enter a number (0 for exit): ";
		cin >> n;
		sum += n;
	} while (n > 0);

	//while (true) {
	//	cout << "Enter a number (0 for exit): ";
	//	cin >> n;
	//	n += sum;
	//	if (n <= 0) { // If n is NOT greater than 0,
	//		break;    // exit.
	//	}
	//}

	cout << "The sum is " << sum << endl;
	return 0;
} 