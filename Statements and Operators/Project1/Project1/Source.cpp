#include <iostream>
using namespace std;
int main() {
	int number_cents{};
	cout << "Give integer representing the number of cents: ";
	cin >> number_cents;
	int dollars{}, quarter{}, dime{}, nickel{}, penny{};
	while (number_cents > 0) {
		if (number_cents >= 100) {
			number_cents = number_cents - 100;
			dollars++;
		}
		if (number_cents >= 25&&number_cents<100) {
			number_cents = number_cents - 25;
			quarter++;
		}
		if (number_cents >= 10&&number_cents<25) {
			number_cents = number_cents - 10;
			dime++;
		}
		if (number_cents >= 5&&number_cents<10) {
			number_cents = number_cents - 5;
			nickel++;
		}
		if (number_cents >= 1&&number_cents<5) {
			number_cents = number_cents - 1;
			penny++;
		}
	}
	cout << "dollars: " << dollars << endl;
	cout << "quarter: " << quarter << endl;
	cout << "dime: " << dime << endl;
	cout << "nickel: " << nickel << endl;
	cout << "penny: " << penny << endl;
	system("pause");
	return 0;
}