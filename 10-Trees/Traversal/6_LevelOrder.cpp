#include<bits/stdc++.h>
#include<queue>

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

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> level;

        for(int i = 0 ; i < size ; i++){
            Node* node = q.front();
            q.pop();

            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);

            level.push_back(node->data);

        }

        ans.push_back(level);
    }
    return ans;
}

int main(){

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> right = new Node(4);

    return 0;
}