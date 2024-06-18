#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};
int main()
{
    Node x = Node(2,nullptr); // Initialising just like we initialise integers or float
    Node* y = &x; // getting its memory address to use further
    /*Better than using above syntax we can use : */
    Node* m = new Node(3,nullptr); // m stores a pointer to the memory location 
    cout<<m; //0x736f08
    /*
    Node z = Node(3,nullptr)
    cout<<z Throws error how can we even print an Object
    we can print z.data and z.next 
    and if we do 
    Node* y = new Node(2,nullptr)
    we cannot use y.data and y.next we must use y->data and y->next
    */
    return 0;
}
