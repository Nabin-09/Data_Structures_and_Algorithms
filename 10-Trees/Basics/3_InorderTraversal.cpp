//Left Root right 
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};
void Inorder(Node* tree){
    if(tree == nullptr){
        return ;
    }
    Inorder(tree->left);
    cout<<tree->data<<" ";
    Inorder(tree->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root -> left -> left = new Node(4);
    root->left->right->left = new Node(6);
    root->right = new Node(3);
    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right  = new Node(10);
    Inorder(root);//T.C = O(N) and S.C = O(N)
}