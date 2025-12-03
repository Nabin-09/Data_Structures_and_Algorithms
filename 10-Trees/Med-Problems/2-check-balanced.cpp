#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data ;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

int findHeight(Node* root){
    if(root == NULL) return ;

    int lh = findHeight(root -> left);
    int rh = findHeight(root -> right);

    return 1 + max(lh , rh);
}
// A balanced BT is where the difference of height of left and right subtree for every node is <= 1
bool check(Node* root){
    if(root == NULL) return;

    int lh = findHeight(root->left);
    int rh = findHeight(root -> right);

    if(abs(rh - lh) > 1) return false;

    bool lt= check(root->left);
    bool rt = check(root -> right);

    if(!lt || !rt) return false;

    return true;
}

int main(){
    return 0;
}