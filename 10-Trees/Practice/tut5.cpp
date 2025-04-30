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
bool getPath(Node* root , vector<int> &arr , int x ){
    if(!root) return false;
    arr.push_back(root->data);

    if(root -> data){
        return true;
    }
    if(getPath(root->left , arr , x)||
    getPath(root->right , arr , x)) return true;

    arr.pop_back();
    return false;
}
vector<int> RootToNode(Node* root , int target){
    vector<int> arr;
    if(root == NULL) return arr;
    getPath(root , arr , target);
    return arr;
}
int main() {
    
    return 0;
}