#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1 , Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};
Node* ConvertArraytoLL(int arr[] , int n ){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1 ; i < n ; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}
void PrintLinkedList(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node x = Node(2, nullptr);
    Node* y = &x;
    cout<<x.data<<endl;  // prints 2 
    cout<<y->data<<endl;  // prints 2 
    int arr[] = {1,2,3,4,5};
    Node* head1 = ConvertArraytoLL(arr , 5); // converts the array into a Linked List
    PrintLinkedList(head1); // Prints the Linked List.
    return 0;
}