#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string fractionAddition(string expression) {
        string delimiters = "+,-";
        vector<string> tokens = split(expression, delimiters);
        for (const string& token : tokens) {
            cout << token << endl;
        }
        return "";
    }
};
int main() {
    string expression = "-1/2+1/2";
    Solution s;
    cout << s.fractionAddition(expression) << endl;
    return 0;
}