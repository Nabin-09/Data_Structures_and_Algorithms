#include <bits/stdc++.h>
using namespace std;

bool Palindrome_String(string s, int i, int len) {
    if (i >= len / 2) { // Base case: reached the middle of the string
        return true;
    }
    if (s[i] != s[len - 1 - i]) { // Characters don't match
        return false;
    }
    return Palindrome_String(s, i + 1, len); 
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int len = s.length();
    cout << (Palindrome_String(s, 0, len) ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}

