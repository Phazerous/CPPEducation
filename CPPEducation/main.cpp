#include <iostream>
#include <string>

using namespace std;

static int cnt = 0;
static long sum = 0;

int main()
{
	while (true) {
		int number;

		cout << "Input a number: ";
		cin >> number;

		cout << "[1] See the sum of the inputed numbers;\n";
		cout << "[2] See how many number are inputed;\n";
		cout << "[3] Stop\n";
		cout << "[4] Continue\n";

		int option;
		cin >> option;

		bool toContinue = true;

		switch (option) {
			case 1:
				cout << "The sum is " << sum;
				break;

			case 2:
				cout << "The amount of numbers is " << cnt;
				break;

			case 3:
				toContinue = false;
				break;

			default:
				break;
		}

		if (!toContinue) {
			break;
		}

		cout << '\n\n';
	}

	return 0;
}

void add(int n) {
	cnt++;
	sum += n;
}