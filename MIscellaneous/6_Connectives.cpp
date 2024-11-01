#include<iostream>
#include<vector>

using namespace std;
class Node{
    public :
    int data ;
    Node* next;
    Node(int data1 , Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};
Node* ArrToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1 ; i < arr.size() ; i++){
        temp->next = new Node(arr[i]);
        temp = temp -> next;
    }
    return head;
}

void PrintLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }

}
int main(){
    vector<int> arr = { 1 , 2 , 3 , 4  , 5 , 6};
    PrintLL(ArrToLL(arr));
}