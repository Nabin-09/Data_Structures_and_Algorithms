#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* ConvertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head-> next;
    }
}
Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node * prev = head ; //creating a Node to store head of the DLL.
    head = head -> next ; //sending head to 2nd element
    head -> back = nullptr; //the back of islolated element is pointing to null
    prev -> next = nullptr; // the next of islolated element is pointing to null
    free(prev);// delete the isolated element.
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5};
    Node* head = ConvertToLL(arr);
    head = deleteHead(head);
    print(head); // 2 3 4 5
    return 0;
}
