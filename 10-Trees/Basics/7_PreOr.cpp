#include <bits/stdc++.h>
using namespace std;
class Node{
public :
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
void PreOrder(Node* root){
    if(root == NULL) return ;
    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
int main() {
    
    return 0;
}