#include<iostream>
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
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next1 = nullptr;
        back1 = nullptr;
    }
};
int main()
{
    
    return 0;
}
