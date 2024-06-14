#include<iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public: 

    Node(int data1,Node* next1){//Constructo
        data = data1;
        next = next1;
    }
};
int main()
{
    std::vector<int> arr = {2,3,4,5,6,7};
    Node* y = new Node(arr[0],nullptr);
    cout << y; //0x716f28 Prints pointer to the memory location (New provides it)
    return 0;
}
