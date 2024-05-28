#include<iostream>
using namespace std;
//Creating a Linked List as its a user defined data structure,
struct Node{
    public :
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};
int main()
{
    int x = 3;
    int* p = &x;
    cout<<p<<endl;
    return 0;
}
