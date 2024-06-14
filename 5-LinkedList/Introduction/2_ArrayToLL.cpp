#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* ConvertArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;//mover =  mover -> next (equivalent)
    }
    return head;
}
int main()
{
    vector<int> arr = {2,4,5,6,7};
    Node* head = ConvertArrtoLL(arr);
    cout<<head->data; // 2
    return 0;
}
