#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1 = nullptr , Node* back1 = nullptr){
        data = data1;
        next = next1;
        back = back1;
    }
};
Node* ConvertArrToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i = 1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        newNode -> back = current;
        current -> next = newNode;
        current = newNode;
    }
    return head;
}
Node* print(Node* head){
    Node* temp = head;
    while(head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* InsertBeforeHead(Node* head,int val){
    Node* newHead = new Node(val,head,nullptr);
    head->back = newHead;
    return newHead;
}
int main()
{
    vector<int> arr = {2,3,4,5,6};
    Node* head = ConvertArrToLL(arr);
    head = InsertBeforeHead(head,1);
    print(head);
    return 0;
}
