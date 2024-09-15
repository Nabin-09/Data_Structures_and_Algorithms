#include <iostream>
#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        for (int i = 0; i < s.size(); i++) {
           
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {

                if (st.empty()) return false;
                char c = st.top();
                st.pop();
                if (!((s[i] == ')' && c == '(') ||
                      (s[i] == '}' && c == '{') ||
                      (s[i] == ']' && c == '['))) {
                    return false;
                }
            }
        }
     
        return st.empty();
    }
};

int main() {
    Solution solution;

   
    std::string test1 = "()";
    std::string test2 = "()[]{}";
    std::string test3 = "(]";
    std::string test4 = "([{}])";
    std::string test5 = "([)]";
    std::string test6 = "{[()]}";

    std::cout << "Test case 1: " << (solution.isValid(test1) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 2: " << (solution.isValid(test2) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 3: " << (solution.isValid(test3) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 4: " << (solution.isValid(test4) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 5: " << (solution.isValid(test5) ? "Valid" : "Invalid") << std::endl;
    std::cout << "Test case 6: " << (solution.isValid(test6) ? "Valid" : "Invalid") << std::endl;

    return 0;
}
