#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

bool isValidParenthesis(string s) {
    stack<char> stk;
    unordered_map<char, char> bracketPair = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'}
    };

    for (char c : s) {
        if (bracketPair.find(c) != bracketPair.end()) {
            if (!stk.empty() && stk.top() == bracketPair[c]) {
                stk.pop();
            } else {
                return false;
            }
        } else {
            stk.push(c);
        }
    }

    return stk.empty();
}

int main() {
    string s = "[{()}]";
    if (isValidParenthesis(s)) {
        cout << "Valid parentheses" << endl;
    } else {
        cout << "Invalid parentheses" << endl;
    }
    return 0;
}
