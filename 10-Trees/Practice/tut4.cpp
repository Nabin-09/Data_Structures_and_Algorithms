//PostOrder traversal
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void PostOrder(Node* root){
    if(root == nullptr) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}
int main() {
    
    return 0;
}