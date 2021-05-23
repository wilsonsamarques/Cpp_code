#include <iostream>
using namespace std;

int main()
{
	int i = 0, n = 0;

	// Get number from the keyboard and initialize i.

	cout << "Enter a number and press ENTER: ";
	cin >> n;
	i = 1;

	while (i <= n) {  //While i less than or equal n,
		cout << i << " "; // Print i,
		i = i + 1;        // Add 1 to i.
	}
	return 0;
}