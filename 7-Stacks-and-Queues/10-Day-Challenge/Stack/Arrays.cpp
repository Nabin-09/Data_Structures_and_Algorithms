// Implementing a stack using arrays
#include<iostream>

using namespace std;

class Stack{
    public :
        int* arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout <<"Stack overflow";
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout <<"Stack Underflow ";
        }
    }

    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }else{
            cout << "Stack is empty "<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(10);
    st.push(12);
    st.push(14);
    st.push(16);
    cout << st.peek() << endl;

    return 0;
}