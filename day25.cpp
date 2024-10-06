#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Definition of binary tree node
struct node {
    int data;
    node* left;
    node* right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};

bool isValidBST(node* root, long minval, long maxval) {
    if (root == nullptr) {
        return true;  // An empty tree is a valid BST
    }

    if (root->data <= minval || root->data >= maxval) {
        return false;  // Check if the current node violates BST property
    }

    // Recursively check left and right subtrees
    return isValidBST(root->left, minval, root->data) &&
           isValidBST(root->right, root->data, maxval);
}

int main() {
    int arr[] = {10, 5, 13};
    node* root = new node(arr[0]);
    root->left = new node(arr[1]);
    root->right = new node(arr[2]);

    // Check if the given binary tree is a valid BST
    bool valid = isValidBST(root, LONG_MIN, LONG_MAX);

    if (valid) {
        cout << "The given binary tree is a valid BST." << endl;
    } else {
        cout << "The given binary tree is NOT a valid BST." << endl;
    }

    return 0;
}
