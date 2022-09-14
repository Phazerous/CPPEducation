#include "file.h";

string filePath = "C:\\Users\\nphaz\\Desktop\\Test\\test.txt";
fstream fileStream;

bool openFile() {
	fileStream.open(filePath);

	return fileStream.is_open();
}

void closeFile() {
	fileStream.close();
}

void printLines() {
	string line;

	cout << '\n';

	while (getline(fileStream, line)) {
		cout << line + '\n';
	}
}

void addLine(string line) {
	fileStream << line + '\n';
}