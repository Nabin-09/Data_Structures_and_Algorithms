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
Node* ConvertToDLL(int arr[], int n){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1;i<n;i++){
        Node* newNode = new Node(arr[i]);
        newNode->back = temp;
        temp->next = newNode;
        temp = newNode;
    }
    return head;
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
Node* InsertatKth(Node* head, int k , int val){
        if(k==1) {
            return InsertBeforeHead(head, k);
        }
        Node* temp = head;
        int cnt = 0;
        while(temp!= NULL){
            cnt++;
            if(cnt == k) break;
            temp = temp->next; 
        }
        Node* prev = temp->back;
        Node* newNode = new Node(val,temp,prev);
        prev->next = newNode;
        temp -> back = newNode;
        return head;
}
int main()
{
    int arr [] = {1,2,4,5,6,7};
    Node* head = ConvertToDLL(arr,6);
    head = InsertatKth(head , 3 , 3);
    Print(head);
    return 0;
}
