#include <iostream>
using namespace std;

string reversewords(string s) {
    string result;
    int i = 0;
    int n = s.length();

    while (i < n) {
        // Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;

        if (i >= n)
            break;

        int j = i + 1;
        // Find the end of the current word
        while (j < n && s[j] != ' ')
            j++;

        string sub = s.substr(i, j - i);

        if (result.length() == 0)
            result = sub;
        else
            result = sub + " " + result;

        i = j + 1;
    }

    return result;
}

int main() {
    string s = "the sky is blue";
    string result = reversewords(s);
    cout << "Reversed result of the string is: " << result << endl;

    return 0;
}
