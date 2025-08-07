#include<iostream>
#include<stack>

using namespace std;

int main(){
    //Stack using STL
    stack<int> st;
    st.push(2);
    st.push(3);
    st.pop();
    cout << st.top() <<" "<<endl;
    return 0;
}