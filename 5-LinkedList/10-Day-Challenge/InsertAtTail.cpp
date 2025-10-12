#include<bits/stdc++.h>

using namespace std;


class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void InsertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}
void print(Node* &head){
    Node* temp =  head;
    while(temp){
        cout << temp -> data<<" ";
        temp = temp -> next;
    }
}
int main(){
    Node* node1= new Node(10);//creation of Node
    // cout << node1->data <<endl;
    // cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    InsertAtTail(tail , 15);
    InsertAtTail(tail , 20);
    print(head);
    return 0;
}