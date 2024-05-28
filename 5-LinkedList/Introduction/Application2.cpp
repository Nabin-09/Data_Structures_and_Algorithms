#include<iostream>
#include<vector>
using namespace std;
class Node{
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
    std::vector<int> arr = {2,7,8,11};
    Node* y = new Node(arr[0],nullptr);
    cout<<y<<endl; // prints address of Y 0x61feec
    // Node y = new Node(arr[0],nullptr);
    // cout<<y<<endl; // throws error
    return 0;
}
