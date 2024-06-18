#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    public:
    Node(int data1,Node* nxt){
        data = data1;
        next = nxt;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* ConvertToLL(vector<int> &arr){
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    int n = arr.size();
    for(int i = 1;i<n;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* InsertHead(int val,Node* head){
   return new Node(val,head); //simply puts new value into head
}
void Print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    vector<int> arr = {2,3,4,5,6};
    Node* head = ConvertToLL(arr);
    head = new Node(1,head);
    Print(head);
    return 0;
}
