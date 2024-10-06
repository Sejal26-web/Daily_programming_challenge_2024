#include <iostream>
using namespace std;

// Definition of binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to find the lowest common ancestor
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    // Base case
    if (root == nullptr || root == p || root == q) {
        return root;
    }

    Node* left = lowestCommonAncestor(root->left, p, q);
    Node* right = lowestCommonAncestor(root->right, p, q);

    if (left == nullptr) {
        return right;
    } else if (right == nullptr) {
        return left;
    } else {
        return root;
    }
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    // Example usage: Find the lowest common ancestor of nodes 5 and 1
    Node* p = root->left->left;    // Node with data 5
    Node* q = root->right->right;   // Node with data 1
    Node* lca = lowestCommonAncestor(root, p, q);
    cout << "Lowest common ancestor of nodes " << p->data << " and " << q->data 
         << " is: " << lca->data << endl;

    return 0;
}
