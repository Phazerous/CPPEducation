#include "file.h";
#include "windows.h"

int main()
{
	if (openFile()) {
		cout << "[1] Read the file\n";
		cout << "[2] Rewrite the file\n";

		int option;
		cin >> option;

		cout << "------------------------------\n";

		if (option == 1) {
			printLines();
		}
		else {
			cout << "Input lines, when you're done, print \"end\"\n";

			string line;

			Sleep(500);

			for (int i = 0;;i++) {
				if (i == 0) {
					getline(cin, line);
					continue;
				}

				cout << "[" << i << "]: ";
				getline(cin, line);

				if (line == "end") {
					break;
				}
				else {
					addLine(line);
				}
			}
		}

		cout << "\n------------------------------";
		cout << "\n\nDone";
	}
	else {
		cout << "Something went wrong";
	}

	return 0;
}