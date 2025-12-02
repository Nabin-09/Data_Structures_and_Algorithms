#include<bits/stdc++.h>

using namespace std;

class Node{
    public :
    int data ;
    Node* left ;
    Node* right;

    Node(int val){
        data = val;
        right = left = nullptr;
    }
};

void Inorder(Node* root){
    if(root == nullptr) return ;

    Inorder(root->left);
    cout<<(root->data)<<endl;
    Inorder(root->right);
}
int main(){

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> right = new Node(4);

    return 0;
}