#include <iostream>
using namespace std;

struct node {
    int val;
    node* left;
    node* right;
    node(int data) : val(data), left(nullptr), right(nullptr) {}
};

bool ismirror(node* t1, node* t2) {
    if (t1 == nullptr && t2 == nullptr) {
        // Both nodes are null
        return true;
    }
    if (t1 == nullptr || t2 == nullptr) {
        // One of the nodes is null
        return false;
    }

    return (t1->val == t2->val) &&
           ismirror(t1->left, t2->right) &&
           ismirror(t1->right, t2->left);
}

bool issymmetric(node* root) {
    return ismirror(root, root);
}

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(2);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(4);
    root->right->right = new node(3);

    bool result = issymmetric(root);
    if (result) {
        cout << "The tree is symmetric." << endl;
    } else {
        cout << "The tree is not symmetric." << endl;
    }

    return 0;
}
