#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public :
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* ConvertArrToLL(std::vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 0;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next;
        mover  = temp;

    }
    return head;

}
int main()
{
    std::vector<int> arr = {2,4,5,7};
    Node* head = ConvertArrToLL(arr);
    cout<<head->data<<endl;
    return 0;
}
