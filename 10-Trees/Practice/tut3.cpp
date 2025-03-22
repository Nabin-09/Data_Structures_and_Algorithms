//InOrder Traversal
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
    void InOrder(Node* root){
        if(root == nullptr) return;
        InOrder(root->left);
        cout<<(root->data);
        InOrder(root->right);
    }
int main() {
    
    return 0;
}