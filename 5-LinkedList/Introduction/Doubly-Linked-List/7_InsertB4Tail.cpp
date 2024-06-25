#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1 = nullptr,Node* back1 = nullptr){
        data = data1;
        next = next1;
        back = back1;
    }
};
Node* ConvertToArr(int arr[],int n){
    Node* Head = new Node(arr[0]);
    Node* temp = Head;
    for(int i = 1;i<n;i++){
        Node* newNode = new Node(arr[i]);
        newNode->back = temp;
        temp->next = newNode;
        temp = newNode;
    }
    return Head;
}
void Print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* InsertBeforeHead(Node* head,int val){
    Node* newHead = new Node(val,head,nullptr);
    head->back = newHead;
    return newHead;
}
Node* InsertB4Tail(Node* head,int val){
    if(head->next == NULL){
        return InsertBeforeHead(head,val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
int main()
{
    int arr[] = {1,2,3,4,5,7};
    Node* head = ConvertToArr(arr,6);
    head = InsertB4Tail(head,6);
    Print(head);
    return 0;
}
