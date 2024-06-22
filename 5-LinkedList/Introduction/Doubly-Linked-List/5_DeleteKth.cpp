#include<iostream>
#include<vector>
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
Node* ConvertToArr(vector<int> &arr){
   Node* head = new Node(arr[0]);
   Node* current = head;
   for(int i = 1;i<arr.size();i++){
    Node* newNode = new Node(arr[i]);
    current->next = newNode;
    newNode->back = current;
    current = newNode;
   }
   return head;
}
void print(Node* head){
    Node* current = head;
    while(current){
        cout<<current->data<<" ";
        current = current->next;
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
Node* DeleteKthElement(Node* head,int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;
    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == NULL){
        deleteHead(head);
    }
    else if(front == NULL){
        return DeleteTail(head);
    }
    prev->next  = front;
    front->back = prev;
    kNode->next = nullptr;
    kNode->back = nullptr;
    delete(kNode);
    return head;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    Node* head = ConvertToArr(arr);
    Node* temp = head;
    int k ;
    cout<<"Enter element to be deleted : "<<endl;
    cin>>k;
    temp = DeleteKthElement(head , k);
    print(head);
    return 0;
}