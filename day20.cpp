#include <iostream>
#include <stack>
using namespace std;

void insertInSortedOrder(stack<int>& s, int element) {
    if (s.empty() || s.top() <= element) {
        s.push(element);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertInSortedOrder(s, element);
    s.push(topElement);
}

void sortStack(stack<int>& s) {
    if (s.empty())
        return;

    int topElement = s.top();
    s.pop();
    sortStack(s);
    insertInSortedOrder(s, topElement);
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(0);

    cout << "Original stack:" << endl;
    printStack(s);

    sortStack(s);

    cout << "Sorted stack:" << endl;
    printStack(s);

    return 0;
}
