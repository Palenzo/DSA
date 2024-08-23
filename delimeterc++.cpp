#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::vector<std::string> split(const std::string& str, const std::string& delimiters) {
    std::vector<std::string> tokens;
    std::string::size_type lastPos = 0;
    std::string::size_type pos = str.find_first_of(delimiters, lastPos);

    while (pos != std::string::npos) {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos + 1;
        pos = str.find_first_of(delimiters, lastPos);
    }

    if (lastPos < str.length()) {
        tokens.push_back(str.substr(lastPos, str.length() - lastPos));
    }

    return tokens;
}

int main() {
    std::string str = "Hello, world! How are you?";
    std::string delimiters = ", !";

    std::vector<std::string> tokens = split(str, delimiters);

    for (const std::string& token : tokens) {
        std::cout << token << std::endl;
    }

    return 0;
}