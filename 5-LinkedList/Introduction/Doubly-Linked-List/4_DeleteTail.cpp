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
        next1 = next;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* ConvertToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node (arr[i]);
        prev->next = temp ; 
        prev = temp;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
Node* DeleteTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        // If the list is empty or has only one node, return NULL
        if (head != NULL) {
            // If there's a single node, free it
            delete head;  // Assuming nodes are allocated with 'new'
        }
        return NULL;
    }

    // Traverse to the second-to-last node
    Node* tail = head;
    while (tail->next->next != NULL) {
        tail = tail->next;
    }

    // Now 'tail' points to the second-to-last node
    Node* lastNode = tail->next;  // The node to delete

    // Update the second-to-last node to be the new tail
    tail->next = NULL;

    // Free the memory of the last node
    delete lastNode;  // Assuming nodes are allocated with 'new'

    // Return the head of the list
    return head;
}
int main()
{
    //23:37
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = ConvertToDLL(arr);
    head = DeleteTail(head);
    print(head);
    return 0;
}
