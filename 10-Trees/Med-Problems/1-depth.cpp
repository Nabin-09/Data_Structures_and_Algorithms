#include<bits/stdc++.h>

using namespace std;

class Node{
    public :
    int data ;
    Node* right;
    Node* left;

    Node(int val){
        data = val;
        right = left = nullptr;
    }
};

//We can also use Level Order Traversal to find the depth , but its not optimal as it takes
//more space as compared to the recursive approach o(N) - if last layer is filled , whereas
//recurive approach will take O(N) only if the tree is skewed(rare)

// 1 + max(l , r) -> Dry run to see it works absolutely phenomenolly

int maxDepth(Node* root){
    if(root == NULL) return;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh , rh);
}

int main(){
    return 0;
}