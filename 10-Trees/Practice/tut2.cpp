//PreOrder Traversal using recursion
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preOrder(Node* root){
    if(root == nullptr) return;
    cout<<(root->data);
    preOrder(root->left);
    preOrder(root->right);
}
int main() {
    
    return 0;
}