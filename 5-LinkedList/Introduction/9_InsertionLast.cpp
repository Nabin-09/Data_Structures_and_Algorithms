#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
         data = data1;
         next = next1;
    }
    Node(int data1){
        data =data1;
        next = nullptr;
    }
};
Node* ConvertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    int n = arr.size();
    for(int i = 1;i<n;i++){
        mover->next = new Node(arr[i]);
        mover = mover->next;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* InsertTail(Node* head,int tail){
    if(head == NULL){//no elements hence just return a Node with the value.
        return new Node(tail);
    }
    Node* temp = head;
    while(temp->next!=NULL){//traversing to the last element
        temp = temp->next;
    }
    Node* newNode = new Node(tail);
    temp->next = newNode;
    return head;
}
int main()
{
    std::vector<int> arr = {1,2,3,4};
    Node* head = ConvertToLL(arr);
    InsertTail(head,5);
    print(head);
    return 0;
}
