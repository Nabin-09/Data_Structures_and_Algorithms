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

int main() {
    Node* root = new Node(10);
    root -> left = new Node(6);  
    root -> right = new Node(8);
    return 0;
}