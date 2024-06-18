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
    if (arr.empty()) return nullptr; // Check for empty vector
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
Node* DeleteK(Node* head,int k){
    if(head == NULL ) return head;
    if(k==1){ //Very Basic and same as removing head
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head; 
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        cnt++;
        if(cnt == k){
            prev->next  = prev->next->next; //connects k-1'th element to k+1's address.
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
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
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = ConvertToLL(arr);
    head = DeleteK(head , 24);
    Print(head);
    return 0;
}
