#include <iostream>
#include <fstream>
#include <string>

using namespace std;

extern string filePath; //Path of the file

bool openFile();

void closeFile();

void printLines();

void addLine(string line);