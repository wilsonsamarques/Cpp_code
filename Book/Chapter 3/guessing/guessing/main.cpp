#include <iostream>
#include <cstdlib>     // Supports rand and srand
#include <ctime>       // Supports time function

using namespace std;

int main()
{
	int n = 0;
	bool do_more = true;

	srand(time(nullptr));          // Set random seed.
	int target = rand() % 50 + 1; // Get random 1-50. 

	do {
		cout << "Enter your guess: ";
		cin >> n;
		if (n == 0) {
			cout << "Bye! ";
			do_more = false;
		}
		else if (n > target) {
			cout << "Guess is too high. " << endl;
		}
		else if (n < target) {
			cout << "Guess is too low. " << endl;
		}
		else {
			cout << "You win!";
			cout << "Answer is " << n << endl;
			do_more = false;
		}
	} while (do_more);

		return 0;
}