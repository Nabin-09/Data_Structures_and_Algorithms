#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* nxt1) {
        data = data1;
        next = nxt1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* ConverttoLL(vector<int> &arr) {
    if (arr.empty()) return nullptr; // Check for empty vector

    Node* head = new Node(arr[0]);
    Node* mover = head;
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; // Move to the newly added node
    }
    return head;
}

Node* DeleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return nullptr;

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next; // Use delete to deallocate memory
    temp->next = nullptr;

    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = ConverttoLL(arr);
    head = DeleteTail(head);

    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free the remaining nodes to avoid memory leak
    while (head) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
    }

    return 0;
}
