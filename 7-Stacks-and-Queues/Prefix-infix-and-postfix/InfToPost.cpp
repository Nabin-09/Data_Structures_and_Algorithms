#include<iostream>
#include<stack>
using namespace std;

int priority(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

string InfToPost(string s) {
    int i = 0;
    int n = s.size();
    string ans = "";
    stack<char> st;

    while(i < n) {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            ans += s[i];
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && priority(s[i]) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    cout << InfToPost(s) << endl;
    }
    //Done
    return 0;
}
