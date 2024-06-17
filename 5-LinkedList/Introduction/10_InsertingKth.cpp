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
        data = data1;
        next = nullptr;
    }
};
Node* ConvertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* current = head;
    int n = arr.size();
    for(int i = 1;i<n;i++){
        current->next = new Node(arr[i]);
        current = current->next;
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
Node* InsertAtK(Node* head,int el, int k){
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }

    }
    if(k==1){
        return new Node(el, head);   
    }
    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* n = new Node(el, temp->next);
            temp->next = n;
            break; 
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    Node* head = ConvertToLL(arr);
    head = InsertAtK(head,100,3);
    print(head);
    return 0;
}
