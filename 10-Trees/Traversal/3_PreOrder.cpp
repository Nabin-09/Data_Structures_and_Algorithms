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

void Preorder(Node* node){
    if(node == nullptr) return ;
    cout<<(node->data)<<endl;
    Preorder(node->left);
    Preorder(node->right);
}

int main(){

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> right = new Node(4);

    return 0;
}