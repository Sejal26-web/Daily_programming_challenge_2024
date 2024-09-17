#include <iostream>
#include <vector>
using namespace std;

string commonPrefix(string s1, string s2) {
    int n = min(s1.length(), s2.length());
    string result;

    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i])
            result += s1[i];
        else
            break;
    }

    return result;
}

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
        return ""; // Empty input case

    string res = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        res = commonPrefix(strs[i], res);
        if (res.empty())
            break; // No common prefix found
    }

    return res;
}

int main() {
    vector<string> strs = {"flight", "flow", "flower"};
    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;

    return 0;
}
