#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string& str, const string& delimiters) {
    vector<string> tokens;
    string::size_type lastPos = 0;
    string::size_type pos = str.find_first_of(delimiters, lastPos);
    const string::size_type len = str.length();

    while (pos != string::npos) {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos + 1;
        pos = str.find_first_of(delimiters, lastPos);
    }

    if (lastPos < len) {
        tokens.push_back(str.substr(lastPos, len - lastPos));
    }

    return tokens;
}

int main() {
    string str = "Hello, world! How are you?";
    string delimiters = ", !";

    vector<string> tokens = split(str, delimiters);

    for (const string& token : tokens) {
        cout << token << endl;
    }

    return 0;
}
