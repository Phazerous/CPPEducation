#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split(string str, string delimeter) {
    vector<string> sublines;
    size_t pos;

    while ((pos = str.find(delimeter)) != string::npos) {
        sublines.push_back(str.substr(0, pos));
        str.erase(0, pos + delimeter.length());
    }

    sublines.push_back(str);

    return sublines;
}

int main() {
    vector<string> sublines;

    cout << "Input your line: " << '\n';

    string line;
    getline(cin, line);

    sublines = split(line, " ");

    for (string subline : sublines) {
        cout << subline << '\n';
    }

    return 0;
}