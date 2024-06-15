#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* nxt1){
        data = data1;
        next = nxt1;
    }
    Node(int d){
        data = d;
        next = nullptr;
    }
};
Node* ConvertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp; 
        mover = temp;//mover =  mover -> next (equivalent)

    }
  return head;
}
Node* Delethead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    Node* head = ConvertToLL(arr);
    head = Delethead(head);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
