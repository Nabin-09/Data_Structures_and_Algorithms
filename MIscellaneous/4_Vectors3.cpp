#include <iostream>
#include <vector>
using namespace std;
void print_vec(const vector<int>& v) {
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}
bool input_vector(vector<int>& v) {
    int n;
    cout << "Enter the number of elements (positive integer): ";
    if (cin >> n && n > 0) {
        v.clear(); 
        v.reserve(n); 
        for (int i = 0; i < n; ++i) {
            int val;
            cout << "Enter value " << i + 1 << ": ";
            if (cin >> val) {
                v.push_back(val);
            } else {
                cerr << "Error: Invalid input. Please enter integers only." << endl;
                v.clear(); 
                return false; 
            }
        }
        return true; 
    } else {
        cerr << "Error: Invalid input. Please enter a positive integer." << endl;
        return false; 
    }
}

int main() {
    vector<int> v;
    while (!input_vector(v)) {
    }

    cout << "Your vector: ";
    print_vec(v);

    return 0;
}
