#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

int main() {
    Node* root = new Node(1); // Create root node
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    // Debug output to verify tree structure
    cout << "Root: " << root->data << "\n";
    cout << "Left child of root: " << root->left->data << "\n";
    cout << "Right child of root: " << root->right->data << "\n";
    cout << "Right child of left node: " << root->left->right->data << "\n";

    return 0;
}

