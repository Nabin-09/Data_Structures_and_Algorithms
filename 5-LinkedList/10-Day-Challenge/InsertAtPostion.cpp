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

void InsertAtPosition(Node* &head ,int posi , int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt < posi - 1){
        temp = temp ->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
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
    InsertAtTail(tail , 50);
    InsertAtTail(tail , 60);
    InsertAtPosition(head , 4 , 30);
    print(head); //10 15 20 30 50 60
    return 0;
}