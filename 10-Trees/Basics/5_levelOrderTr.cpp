#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data = x;
        right = nullptr;
        left = nullptr;
    }
};
vector<vector<int>> LevelOrder(Node* root){
    vector<vector<int>> ans;
    if(root == nullptr) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0 ; i < size;i++){
            Node* node = q.front();
            q.pop();
            if(node->left != NULL)q.push(node->left);
            if(node -> right != NULL) q.push(node -> right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main() {
    return 0;
}