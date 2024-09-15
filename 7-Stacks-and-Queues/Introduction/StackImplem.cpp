#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // Use <cmath> instead of <math.h>
using namespace std;

// Implementation using arrays
class StackIm {
private:
    int top; // Top of the stack
    int stack[10]; // Fixed size stack

public:
    // Constructor to initialize the stack
    StackIm() : top(-1) {}

    // Push function to add an element to the stack
    void push(int x) {
        if (top >= 9) { // Check for overflow (top should be < 10)
            cout << "STACK OVERFLOW\n";
            return; // Exit the function if overflow occurs
        }
        top++;
        stack[top] = x;
    }

    // Top function to get the top element of the stack
    int getTop() {
        if (top == -1) {
            cout << "STACK UNDERFLOW\n";
            return -1; // Return -1 or some error code
        }
        return stack[top];
    }

    // Pop function to remove the top element from the stack
    void pop() {
        if (top == -1) {
            cout << "STACK UNDERFLOW\n";
            return; // Exit the function if underflow occurs
        }
        top--;
    }

    // Size function to get the current size of the stack
    int size() {
        return (top + 1);
    }
};

int main() {
    StackIm stack; // Create an instance of StackIm

    // Testing the stack implementation
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.getTop() << endl; // Should print 30
    cout << "Current stack size: " << stack.size() << endl; // Should print 3

    stack.pop(); // Remove top element (30)
    cout << "Top element after pop: " << stack.getTop() << endl; // Should print 20
    cout << "Current stack size: " << stack.size() << endl; // Should print 2

    stack.pop(); // Remove top element (20)
    stack.pop(); // Remove top element (10)
    stack.pop(); // Attempt to pop from empty stack

    return 0;
}