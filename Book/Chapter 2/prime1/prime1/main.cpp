#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 0; // Number to test for prime-ness
	int i = 2; // Loop counter
	bool is_prime = true; // Boolean flag
	                      // Assume true for now.

	// Get a number from the keyboard.

	cout << "Enter a number and press ENTER: ";
	cin >> n;

	// Test for prime by checking for divisibility
	// by all whole numbers from 2 to sqrt(n).

	while (i <= sqrt(n)) {
		if (n % i == 0) {      // If i divides n,
			is_prime = false;  // n is not a prime.
			break;             // BREAK OUT OF THE LOOP NOW!
		}
		++i;                   // Add 1 to i.
	}

	// Print results

	if (is_prime) {
		cout << "Number is prime." << endl;
	}
	else {
		cout << "Number is not prime." << endl;
	}
	return 0;        
}